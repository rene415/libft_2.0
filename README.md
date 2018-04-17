# libft_2.0

C programming can be very tedious when one doesn’t have access to those highly useful
standard functions. For this project we have to re-write those functions,
understand them, and learn to use them. This library will help me for all the future C
projects in the 42 Curriculum.

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. See deployment for notes on how to deploy the project on a live system.

### Prerequisites

Part One of the project is to recode the following list of system functions:

```
memset - he memset() function writes len bytes of value c (converted to an unsigned char) to the string b.
bzero - The bzero() function writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing.
memcpy - The memcpy() function copies n bytes from memory area src to memory area dst.
memccpy
memmove
memchr
memcmp
strlen - The strlen() function computes the length of the string s.
strdup
strcpy
strncpy
strcat
strncat
strlcat
strchr
strrchr
strstr
strnstr
strcmp
strncmp
atoi
isalpha
isdigit
isalnum
isascii
isprint
toupper
tolower
```

### Running

In order to compile the Library you will need to run the Makefile in order to do that run

```
make
```

once compiled you will run the function that you want to try out by editing the main.c file

```
gcc main.c libft.a
```

execute the file

```
./a.out
```

End with an example of getting some data out of the system or using it for a little demo

## Running the tests

Explain how to run the automated tests for this system

### Break down into end to end tests

Explain what these tests test and why

```
Give an example
```

### And coding style tests

Explain what these tests test and why

```
Give an example
```

## Deployment

Add additional notes about how to deploy this on a live system

## Built With

* [Dropwizard](http://www.dropwizard.io/1.0.2/docs/) - The web framework used
* [Maven](https://maven.apache.org/) - Dependency Management
* [ROME](https://rometools.github.io/rome/) - Used to generate RSS Feeds

## Contributing

Please read [CONTRIBUTING.md](https://gist.github.com/PurpleBooth/b24679402957c63ec426) for details on our code of conduct, and the process for submitting pull requests to us.

## Versioning

We use [SemVer](http://semver.org/) for versioning. For the versions available, see the [tags on this repository](https://github.com/your/project/tags). 

## Authors

* **Billie Thompson** - *Initial work* - [PurpleBooth](https://github.com/PurpleBooth)

See also the list of [contributors](https://github.com/your/project/contributors) who participated in this project.

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

* Hat tip to anyone who's code was used
* Inspiration
* etc

