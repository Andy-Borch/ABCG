#ifndef SPMV_COMM_HPP
#define SPMV_COMM_HPP

#include "mpi.h"

class SpMVComm
{
    public:
        SpMVComm()
        {
            A = NULL;
            sendbuf = NULL;
            recvbuf = NULL;
            spmv_req = NULL;
            n = 0;
        }

        ~SpMVComm()
        {
            if (spmv_req)
            {
                delete[] spmv_req;
            }
        }

        void init(ParMat& A_in, double* sbuf, double* rbuf)
        {
        }

        void pack(std::vector<double>& x)
        {
        }

        void start()
        {
        }

        void wait()
        {
        }

        double* get_recvbuf()
        {
        }


    protected:
        double* sendbuf;
        double* recvbuf;
        int n;
        ParMat* A;

    private:
        MPI_Request* spmv_req;
};

#endif
