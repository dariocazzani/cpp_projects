#ifndef TIMING_UTILS
#define TIMING_UTILS

int random_int(const int low, const int high);
void add_sort(std::vector<int>& v, const int num);
void add_sort(std::list<int>& l, const int num);
void do_work(std::vector<int> v);
void do_work(std::list<int> l);
template <typename Time>
void print_times(const Time t0, const Time t1, const std::string s);



#endif