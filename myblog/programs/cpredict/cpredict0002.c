#define PREINCREMENT(x) ++x
#define POSTINCREMENT(x) x++

int main(int argc, char *argv[]) {
  char *string = "yourname";
		int x = 5;

		PREINCREMENT(string);
		POSTINCREMENT(string);

		PREINCREMENT(x);
		POSTINCREMENT(x);

  return 0;
}
