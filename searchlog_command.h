#pragma once

class SearchLogCommand : public Command{
private:
    long long fn;
public:
    SearchLogCommand(long long fn);
    void execute();
};
