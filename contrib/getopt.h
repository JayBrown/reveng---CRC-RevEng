/* Public domain getopt.h, Greg Cook, <debounce@yahoo.co.uk> */

#ifndef   GETOPT_H
#  define GETOPT_H
extern int	 opterr;		/* undocumented error-suppressor*/
extern int	 optind;		/* index into argv vector	*/
extern int	 optopt;		/* char checked for validity	*/
extern char	*optarg;		/* arg associated with option	*/

extern int	 getopt(int nargc, char **nargv, char *ostr);
#endif /* GETOPT_H */
