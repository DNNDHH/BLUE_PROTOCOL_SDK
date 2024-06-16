#pragma once

 

// Package: LibraryMenu

#include "Basic.hpp"

#include "LibraryMenu_classes.hpp"
#include "LibraryMenu_parameters.hpp"


namespace SDK
{

// Function LibraryMenu.LibraryMenu_C.ExecuteUbergraph_LibraryMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_C::ExecuteUbergraph_LibraryMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_C", "ExecuteUbergraph_LibraryMenu");

	Params::LibraryMenu_C_ExecuteUbergraph_LibraryMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu.LibraryMenu_C.OnLoadAchievementDataDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_C::OnLoadAchievementDataDelegate_Event(const bool Result, const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_C", "OnLoadAchievementDataDelegate_Event");

	Params::LibraryMenu_C_OnLoadAchievementDataDelegate_Event Parms{};

	Parms.Result = Result;
	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu.LibraryMenu_C.ButtonRefreshAchievement
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_C::ButtonRefreshAchievement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_C", "ButtonRefreshAchievement");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu.LibraryMenu_C.BndEvt__LibraryMenu_SubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   ButtonId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_C::BndEvt__LibraryMenu_SubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(int32 ButtonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_C", "BndEvt__LibraryMenu_SubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");

	Params::LibraryMenu_C_BndEvt__LibraryMenu_SubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature Parms{};

	Parms.ButtonId = ButtonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu.LibraryMenu_C.Library_SubMenu_Open
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_C::Library_SubMenu_Open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_C", "Library_SubMenu_Open");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu.LibraryMenu_C.OnSameMenuBookmarkAccessNew
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InBookMarkType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ULibraryMenu_C::OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_C", "OnSameMenuBookmarkAccessNew");

	Params::LibraryMenu_C_OnSameMenuBookmarkAccessNew Parms{};

	Parms.InBookMarkType = std::move(InBookMarkType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu.LibraryMenu_C.SetupTheater_Event
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_C::SetupTheater_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_C", "SetupTheater_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu.LibraryMenu_C.SetupAchievement_Event
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_C::SetupAchievement_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_C", "SetupAchievement_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu.LibraryMenu_C.OnLoadAchivementDelegate_event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FSBAchievementInfo>       AchievementList                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ULibraryMenu_C::OnLoadAchivementDelegate_event(const bool Result, const TArray<struct FSBAchievementInfo>& AchievementList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_C", "OnLoadAchivementDelegate_event");

	Params::LibraryMenu_C_OnLoadAchivementDelegate_event Parms{};

	Parms.Result = Result;
	Parms.AchievementList = std::move(AchievementList);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu.LibraryMenu_C.UpdateBookmarkStatusButton
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_C::UpdateBookmarkStatusButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_C", "UpdateBookmarkStatusButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu.LibraryMenu_C.BookmarkUpdateRequest
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_C::BookmarkUpdateRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_C", "BookmarkUpdateRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu.LibraryMenu_C.SelectTab
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ELibraryMenuType                        InputPin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_C::SelectTab(ELibraryMenuType InputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_C", "SelectTab");

	Params::LibraryMenu_C_SelectTab Parms{};

	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu.LibraryMenu_C.BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   ButtonId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_C::BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(int32 ButtonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_C", "BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");

	Params::LibraryMenu_C_BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature Parms{};

	Parms.ButtonId = ButtonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu.LibraryMenu_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_C", "OnAnimationFinished");

	Params::LibraryMenu_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu.LibraryMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULibraryMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu.LibraryMenu_C.ResetMouseCursorTypeToDefaultRequest
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_C::ResetMouseCursorTypeToDefaultRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_C", "ResetMouseCursorTypeToDefaultRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu.LibraryMenu_C.OnSubMenuUpdate
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MainPage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SubPage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_C::OnSubMenuUpdate(int32 MainPage, int32 SubPage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_C", "OnSubMenuUpdate");

	Params::LibraryMenu_C_OnSubMenuUpdate Parms{};

	Parms.MainPage = MainPage;
	Parms.SubPage = SubPage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu.LibraryMenu_C.OnRMShopClosed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_C::OnRMShopClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_C", "OnRMShopClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu.LibraryMenu_C.OnParentTerm
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_C::OnParentTerm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_C", "OnParentTerm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu.LibraryMenu_C.GetIdListCallback
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    WasSuccessful                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBLibraryPictureBookType               Type                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_C::GetIdListCallback(bool WasSuccessful, int32 RetCode, const ESBLibraryPictureBookType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_C", "GetIdListCallback");

	Params::LibraryMenu_C_GetIdListCallback Parms{};

	Parms.WasSuccessful = WasSuccessful;
	Parms.RetCode = RetCode;
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu.LibraryMenu_C.Setup Selected Menu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ELibraryMenuType                        InSelectedMenuType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_C::Setup_Selected_Menu(ELibraryMenuType InSelectedMenuType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_C", "Setup Selected Menu");

	Params::LibraryMenu_C_Setup_Selected_Menu Parms{};

	Parms.InSelectedMenuType = InSelectedMenuType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu.LibraryMenu_C.SetupMenuButtonExcrametion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_C::SetupMenuButtonExcrametion(int32 Selection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_C", "SetupMenuButtonExcrametion");

	Params::LibraryMenu_C_SetupMenuButtonExcrametion Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu.LibraryMenu_C.SetupAchievementButtonExcrametion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_C::SetupAchievementButtonExcrametion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_C", "SetupAchievementButtonExcrametion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu.LibraryMenu_C.SetupTheaterButtonExcrametion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_C::SetupTheaterButtonExcrametion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_C", "SetupTheaterButtonExcrametion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu.LibraryMenu_C.RefleshNewIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_C::RefleshNewIcon(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_C", "RefleshNewIcon");

	Params::LibraryMenu_C_RefleshNewIcon Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu.LibraryMenu_C.Set Title And Help Text Id
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ELibraryMenuType                        InSelectedMenuType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSubIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_C::Set_Title_And_Help_Text_Id(ELibraryMenuType InSelectedMenuType, int32 InSubIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_C", "Set Title And Help Text Id");

	Params::LibraryMenu_C_Set_Title_And_Help_Text_Id Parms{};

	Parms.InSelectedMenuType = InSelectedMenuType;
	Parms.InSubIndex = InSubIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu.LibraryMenu_C.BookmarkTypeToMenueType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           Key                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
// ELibraryMenuType                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ELibraryMenuType ULibraryMenu_C::BookmarkTypeToMenueType(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_C", "BookmarkTypeToMenueType");

	Params::LibraryMenu_C_BookmarkTypeToMenueType Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function LibraryMenu.LibraryMenu_C.SetupSelectedSubMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_C::SetupSelectedSubMenu(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_C", "SetupSelectedSubMenu");

	Params::LibraryMenu_C_SetupSelectedSubMenu Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu.LibraryMenu_C.GetCharacterAchievementData
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InputPin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBAchievementInfo               Output                                                 (Parm, OutParm, NoDestructor)

void ULibraryMenu_C::GetCharacterAchievementData(int32 InputPin, struct FSBAchievementInfo* Output)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_C", "GetCharacterAchievementData");

	Params::LibraryMenu_C_GetCharacterAchievementData Parms{};

	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = std::move(Parms.Output);
}


// Function LibraryMenu.LibraryMenu_C.Setup Library Button Excrametion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_C::Setup_Library_Button_Excrametion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_C", "Setup Library Button Excrametion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu.LibraryMenu_C.CheckReadDemoIdList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     In                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ULibraryMenu_C::CheckReadDemoIdList(TArray<class FName>& In)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_C", "CheckReadDemoIdList");

	Params::LibraryMenu_C_CheckReadDemoIdList Parms{};

	Parms.In = std::move(In);

	UObject::ProcessEvent(Func, &Parms);

	In = std::move(Parms.In);
}


// Function LibraryMenu.LibraryMenu_C.TermRequest
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESubMenuTermReason                      InReason                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESubMenuTermRequestReply                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESubMenuTermRequestReply ULibraryMenu_C::TermRequest(const ESubMenuTermReason InReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_C", "TermRequest");

	Params::LibraryMenu_C_TermRequest Parms{};

	Parms.InReason = InReason;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

