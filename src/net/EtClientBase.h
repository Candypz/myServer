class CEtClientBase {
public:
    CEtClientBase(int pid, struct bufferevent *bev);
    ~CEtClientBase();
    int getPid();
    int send(short cmd, const char *data);
private:
    int m_pid;
    bufferevent *m_bev;
};
