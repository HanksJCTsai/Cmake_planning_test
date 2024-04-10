## For building the application
FROM ubuntu:22.04 as builder
RUN apt-get update && \ 
    apt-get install -y vim gcc g++ cmake make &&\
    rm -rf /var/lib/apt/lists/*

WORKDIR /app
COPY . .
RUN cmake . && make

## For running the application
FROM ubuntu:22.04 as runner
COPY --from=builder /app/bin /app/bin
WORKDIR /app
# CMD ["./bin/planning_main"]