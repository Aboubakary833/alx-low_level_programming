#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void jack_bauer(void)
{
    int h_f, h_l, m_f, m_l;
    for (h_f = 0; h_f <= 2; h_f++)
    {
        if (h_f < 2)
        {
            for (h_l = 0; h_l < 10; h_l++)
            {
                for (m_f = 0; m_f < 6; m_f++)
                {
                    for (m_l = 0; m_l < 10; m_l++)
                    {
                        _putchar(h_f + '0');
                        _putchar(h_l + '0');
                        _putchar(':');
                        _putchar(m_f + '0');
                        _putchar(m_l + '0');
                         _putchar('\n');
                    }
                }
            }
        }
        else
        {
            for (h_l = 0; h_l < 4; h_l++)
            {
                for (m_f = 0; m_f < 6; m_f++)
                {
                    for (m_l = 0; m_l < 10; m_l++)
                    {
                        _putchar(h_f + '0');
                        _putchar(h_l + '0');
                        _putchar(':');
                        _putchar(m_f + '0');
                        _putchar(m_l + '0');
                         _putchar('\n');
                    }
                }
            }
        }
    }
}
