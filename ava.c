#include <my_global.h>
#include <mysql.h>
void finish_with_error(MYSQL *conn){
	fprintf(stderr,"%s\n",mysql_error(conn));
	mysql_colse(conn);
	exit(1);
}
int main(int argc, char const *argv[]){
	MYSQL *conn = mysql_init(NULL);
		printf("MYSQL client version : %s\n",mysql_get_client_info());
	if (mysql_real_connect(con,"localhost","root","rohit","rohit",0,NULL,0) == NULL)
	{
		fprintf(stderr, "%s\n",mysql_error(conn));
		mysql_colse(conn);
		exit(1);
	}
	return 0;
}