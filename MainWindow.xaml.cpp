#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::Menu_Bar_LAB1122::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();
    }

    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

}


void winrt::Menu_Bar_LAB1122::implementation::MainWindow::MenuFlyoutItem_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    TBlock().Text(L"You Clicked : Save");
}


void winrt::Menu_Bar_LAB1122::implementation::MainWindow::MenuFlyoutItem_Click_1(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    TBlock().Text(L"You Clicked : Cut");
}


void winrt::Menu_Bar_LAB1122::implementation::MainWindow::MenuFlyoutItem_Click_2(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    TBlock().Text(L"You Clicked : Copy");
}


void winrt::Menu_Bar_LAB1122::implementation::MainWindow::MenuFlyoutItem_Click_3(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    TBlock().Text(L"You Clicked : Paste");
}


void winrt::Menu_Bar_LAB1122::implementation::MainWindow::MenuFlyoutItem_Click_4(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    MessageBox(NULL, L"도움말", L"도움말", MB_OK);
}


void winrt::Menu_Bar_LAB1122::implementation::MainWindow::RadioMenuFlyoutItem_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    TBlock_2().Text(L"State : ON");
}


void winrt::Menu_Bar_LAB1122::implementation::MainWindow::RadioMenuFlyoutItem_Click_1(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    TBlock_2().Text(L"State : OFF");
}


void winrt::Menu_Bar_LAB1122::implementation::MainWindow::MenuFlyoutItem_Click_5(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    TBlock().Text(L"You Clicked : Open");
}


void winrt::Menu_Bar_LAB1122::implementation::MainWindow::MenuFlyoutItem_Click_6(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    TBlock().Text(L"You Clicked : Bluetooth");
}


void winrt::Menu_Bar_LAB1122::implementation::MainWindow::MenuFlyoutItem_Click_7(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    TBlock().Text(L"You Clicked : Email");
}


void winrt::Menu_Bar_LAB1122::implementation::MainWindow::MenuFlyoutItem_Click_8(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    MessageBox(NULL, L"I love WinUI 3.", L"I love WinUI 3.", MB_OK);
}
