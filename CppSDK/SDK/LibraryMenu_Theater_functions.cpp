#pragma once

 

// Package: LibraryMenu_Theater

#include "Basic.hpp"

#include "LibraryMenu_Theater_classes.hpp"
#include "LibraryMenu_Theater_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_Theater.LibraryMenu_Theater_C.UpdateNewIcon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Theater_C::UpdateNewIcon__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "UpdateNewIcon__DelegateSignature");

	Params::LibraryMenu_Theater_C_UpdateNewIcon__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.ExecuteUbergraph_LibraryMenu_Theater
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Theater_C::ExecuteUbergraph_LibraryMenu_Theater(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "ExecuteUbergraph_LibraryMenu_Theater");

	Params::LibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.ReleaseUIBlocker
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Theater_C::ReleaseUIBlocker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "ReleaseUIBlocker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.BndEvt__LibraryMenu_Theater_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Theater_C::BndEvt__LibraryMenu_Theater_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature(int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "BndEvt__LibraryMenu_Theater_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature");

	Params::LibraryMenu_Theater_C_BndEvt__LibraryMenu_Theater_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature Parms{};

	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.BndEvt__LibraryMenu_Theater_BtnPlay_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Theater_C::BndEvt__LibraryMenu_Theater_BtnPlay_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "BndEvt__LibraryMenu_Theater_BtnPlay_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.SaveTheaterSelectedInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CategoryId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ListId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CategoryOffset                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ListOffset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Theater_C::SaveTheaterSelectedInfo(int32 CategoryId, int32 ListId, float CategoryOffset, float ListOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "SaveTheaterSelectedInfo");

	Params::LibraryMenu_Theater_C_SaveTheaterSelectedInfo Parms{};

	Parms.CategoryId = CategoryId;
	Parms.ListId = ListId;
	Parms.CategoryOffset = CategoryOffset;
	Parms.ListOffset = ListOffset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.Request_SaveDemo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             DemoId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Theater_C::Request_SaveDemo(class FName DemoId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "Request_SaveDemo");

	Params::LibraryMenu_Theater_C_Request_SaveDemo Parms{};

	Parms.DemoId = DemoId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.LoadThumbnail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        Thumbail                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ULibraryMenu_Theater_C::LoadThumbnail(TSoftObjectPtr<class UTexture2D> Thumbail)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "LoadThumbnail");

	Params::LibraryMenu_Theater_C_LoadThumbnail Parms{};

	Parms.Thumbail = Thumbail;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Theater_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.OnEndDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EYesNoDialogResult                      Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Theater_C::OnEndDialog(const EYesNoDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "OnEndDialog");

	Params::LibraryMenu_Theater_C_OnEndDialog Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULibraryMenu_Theater_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.OnParentTerm
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Theater_C::OnParentTerm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "OnParentTerm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.OnRMShopClosed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Theater_C::OnRMShopClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "OnRMShopClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.OnSameMenuBookmarkAccessNew
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InBookMarkType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ULibraryMenu_Theater_C::OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "OnSameMenuBookmarkAccessNew");

	Params::LibraryMenu_Theater_C_OnSameMenuBookmarkAccessNew Parms{};

	Parms.InBookMarkType = std::move(InBookMarkType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.OnSubMenuUpdate
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MainPage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SubPage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Theater_C::OnSubMenuUpdate(int32 MainPage, int32 SubPage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "OnSubMenuUpdate");

	Params::LibraryMenu_Theater_C_OnSubMenuUpdate Parms{};

	Parms.MainPage = MainPage;
	Parms.SubPage = SubPage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.OnClickEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ListIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Theater_C::OnClickEvent(int32 ListIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "OnClickEvent");

	Params::LibraryMenu_Theater_C_OnClickEvent Parms{};

	Parms.ListIndex = ListIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                             NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void ULibraryMenu_Theater_C::BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature(const class FText& NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature");

	Params::LibraryMenu_Theater_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature Parms{};

	Parms.NewParam = std::move(NewParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULibraryMenu_Theater_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.ResetMouseCursorTypeToDefaultRequest
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Theater_C::ResetMouseCursorTypeToDefaultRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "ResetMouseCursorTypeToDefaultRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.OnLoaded_56ABDCA943F8CB39C0C21897E8372530
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Theater_C::OnLoaded_56ABDCA943F8CB39C0C21897E8372530(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "OnLoaded_56ABDCA943F8CB39C0C21897E8372530");

	Params::LibraryMenu_Theater_C_OnLoaded_56ABDCA943F8CB39C0C21897E8372530 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.CreateCategoryList
// (Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Theater_C::CreateCategoryList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "CreateCategoryList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.GetDemoTypeName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBDemoType                             Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Theater_C::GetDemoTypeName(ESBDemoType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "GetDemoTypeName");

	Params::LibraryMenu_Theater_C_GetDemoTypeName Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.CheckLevelName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsScript                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsDemo                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_Theater_C::CheckLevelName(class FName Param_Name, bool IsScript, bool* IsDemo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "CheckLevelName");

	Params::LibraryMenu_Theater_C_CheckLevelName Parms{};

	Parms.Param_Name = Param_Name;
	Parms.IsScript = IsScript;

	UObject::ProcessEvent(Func, &Parms);

	if (IsDemo != nullptr)
		*IsDemo = Parms.IsDemo;
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.CreateItemList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Theater_C::CreateItemList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "CreateItemList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.CreateItemDetail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Theater_C::CreateItemDetail(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "CreateItemDetail");

	Params::LibraryMenu_Theater_C_CreateItemDetail Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.CreteGameContentId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             LevelName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             GameContentId                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Theater_C::CreteGameContentId(class FName LevelName, class FName* GameContentId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "CreteGameContentId");

	Params::LibraryMenu_Theater_C_CreteGameContentId Parms{};

	Parms.LevelName = LevelName;

	UObject::ProcessEvent(Func, &Parms);

	if (GameContentId != nullptr)
		*GameContentId = Parms.GameContentId;
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.SaveLibSaveData
// (Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Theater_C::SaveLibSaveData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "SaveLibSaveData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.Load Lib Save Data
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBLibrarySaveManager*            LibSaveData                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Theater_C::Load_Lib_Save_Data(class USBLibrarySaveManager** LibSaveData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "Load Lib Save Data");

	Params::LibraryMenu_Theater_C_Load_Lib_Save_Data Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LibSaveData != nullptr)
		*LibSaveData = Parms.LibSaveData;
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.CheckViewedDemoId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             DemoId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsOk                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_Theater_C::CheckViewedDemoId(class FName DemoId, bool* IsOk)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "CheckViewedDemoId");

	Params::LibraryMenu_Theater_C_CheckViewedDemoId Parms{};

	Parms.DemoId = DemoId;

	UObject::ProcessEvent(Func, &Parms);

	if (IsOk != nullptr)
		*IsOk = Parms.IsOk;
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.AddDemoAllList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             DemoName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Theater_C::AddDemoAllList(class FName DemoName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "AddDemoAllList");

	Params::LibraryMenu_Theater_C_AddDemoAllList Parms{};

	Parms.DemoName = DemoName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.IsReadCategory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CategoryId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Theater_C::IsReadCategory(int32 CategoryId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "IsReadCategory");

	Params::LibraryMenu_Theater_C_IsReadCategory Parms{};

	Parms.CategoryId = CategoryId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.IsReadAllCategory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Theater_C::IsReadAllCategory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "IsReadAllCategory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.ExtractCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             Category                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_Theater_C::ExtractCategory(class FName Category, int32 ID, bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "ExtractCategory");

	Params::LibraryMenu_Theater_C_ExtractCategory Parms{};

	Parms.Category = Category;
	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.InitExclamationIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Theater_C::InitExclamationIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "InitExclamationIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.Check Read Demo Id List
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     In                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ULibraryMenu_Theater_C::Check_Read_Demo_Id_List(TArray<class FName>& In)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "Check Read Demo Id List");

	Params::LibraryMenu_Theater_C_Check_Read_Demo_Id_List Parms{};

	Parms.In = std::move(In);

	UObject::ProcessEvent(Func, &Parms);

	In = std::move(Parms.In);
}


// Function LibraryMenu_Theater.LibraryMenu_Theater_C.TermRequest
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESubMenuTermReason                      InReason                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESubMenuTermRequestReply                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESubMenuTermRequestReply ULibraryMenu_Theater_C::TermRequest(const ESubMenuTermReason InReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Theater_C", "TermRequest");

	Params::LibraryMenu_Theater_C_TermRequest Parms{};

	Parms.InReason = InReason;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

