FROM rust


RUN apt-get update -y \
	&& apt-get install -y cmake golang \
	&& rm -rf /var/lib/apt/lists/*



workdir /code
add . /code
RUN cargo build


CMD ["cargo","run"]
