//
// Created by shenjack on 17-3-29.
//

#include <bits/socket_type.h>
#include <netdb.h>
#include <bits/shared_ptr.h>
#include <string>
#include <bits/unordered_map.h>
#include <regex>

using namespace std;
namespace Web{
    template <typename socket_type >
    class ServerBase{
    public:
        void start();

    protected:
        virtual void accept();

        void processRequestAndRespond(std::shared_ptr<socket_type> socket)const ;

    };

    template <typename socket_type>
    class server : public ServerBase{};

    struct request{
        string method, path, http_version;
        shared_ptr<istream> content;
        unordered_map<string , string> header;
        smatch path_match;
    };

}