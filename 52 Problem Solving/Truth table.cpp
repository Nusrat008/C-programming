#include<stdio.h>
int main(){
    int field,friday,cousin,pc_ok;
	friday = 0; cousin  = 0;pc_ok = 0;
	field = friday && !(cousin && pc_ok );
	printf("%d%d%d=> %d\n",friday,cousin,pc_ok,field );
	friday = 0; cousin = 0;pc_ok = 1;
	field = friday && !(cousin && pc_ok );
	printf("%d%d%d=> %d\n",friday,cousin,pc_ok,field );
	friday = 0; cousin  = 1;pc_ok = 0;
	field = friday && !(cousin&& pc_ok );
	printf("%d%d%d=> %d\n",friday,cousin,pc_ok,field );
	friday = 0; cousin = 1;pc_ok = 1;
	field = friday && !(cousin && pc_ok );
	printf("%d%d%d=> %d\n",friday,cousin,pc_ok,field );
	friday = 1; cousin = 0;pc_ok = 0;
	field = friday && !(cousin && pc_ok );
	printf("%d%d%d=> %d\n",friday,cousin,pc_ok,field );
	friday = 1; cousin = 0;pc_ok = 1;
	field = friday && !(cousin&& pc_ok );
	printf("%d%d%d=> %d\n",friday,cousin,pc_ok,field );
	friday = 1; cousin = 1;pc_ok = 0;
	field = friday && !(cousin&& pc_ok );
	printf("%d%d%d=> %d\n",friday,cousin,pc_ok,field );
	friday = 1; cousin = 1;pc_ok = 1;
	field = friday && !(cousin&& pc_ok );
	printf("%d%d%d=> %d\n",friday,cousin,pc_ok,field );
	
	return 0;
}
