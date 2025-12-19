#include "read_uart_only.h"
#include "read_thread_serial.h"
#include "log_to_file_serial.h"
char read_file_stm_32::read_serial_uart(char from_uart_reader_symbol)
{

        // TODO: there only do string from char
        // Protocol ! , END 0

        switch (d)
        {
        case READ_HEADER:
        {

                if (from_uart_reader_symbol == '!')
                {

                        d = START_CREATE_MESSAGE;
                }

                break;
        }

        case START_CREATE_MESSAGE:
        {

                if (from_uart_reader_symbol == 'q')
                {
                        from_uart_reader_symbol = '\0';
                        d = END_MESSAGE;
                }
                to_vector += from_uart_reader_symbol;
                break;
        }

        case END_MESSAGE:
        {
                std::cerr << to_vector << "message" << "\n";
                i.receive_message(to_vector);

                to_vector.clear();
                d = READ_HEADER;

                break;
        }
        }
        // read_bytes = t.sa.readString(temp_buffer_100, '\n', sizeof(temp_buffer_100))

        return 1;
}
