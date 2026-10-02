while (dq.size() > 0)
        {
            int first = dq.front();
            dq.pop_front();
            int second = dq.front();
            dq.pop_front();
            int third = dq.front();
            dq.pop_front();

            dq.push_front(second);

            if(first == n || third == n) {
                break;
            } 

            sec++;
        }