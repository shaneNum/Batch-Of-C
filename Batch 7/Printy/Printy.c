#include <stdio.h>
#include <stdlib.h>

int main() {
	char change[100];
	
	scanf("%[^\n]",change);
	
	printf("#include <stdio.h>\nint main()\n{\n    printf(\"%%s\\n\",\"%s\");\n    return 0;\n}\n",change);
	
	return 0;
}
