#pragma once

 

// Package: LibraryMenu_Bookmark

#include "Basic.hpp"

#include "LibraryMenu_Bookmark_classes.hpp"
#include "LibraryMenu_Bookmark_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_Bookmark.LibraryMenu_Bookmark_C.OnClickDetail__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Bookmark_C::OnClickDetail__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Bookmark_C", "OnClickDetail__DelegateSignature");

	Params::LibraryMenu_Bookmark_C_OnClickDetail__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Bookmark.LibraryMenu_Bookmark_C.ExecuteUbergraph_LibraryMenu_Bookmark
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Bookmark_C::ExecuteUbergraph_LibraryMenu_Bookmark(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Bookmark_C", "ExecuteUbergraph_LibraryMenu_Bookmark");

	Params::LibraryMenu_Bookmark_C_ExecuteUbergraph_LibraryMenu_Bookmark Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Bookmark.LibraryMenu_Bookmark_C.BndEvt__LibraryMenu_Bookmark_CategoryList_Type1_K2Node_ComponentBoundEvent_2_CategoryChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Bookmark_C::BndEvt__LibraryMenu_Bookmark_CategoryList_Type1_K2Node_ComponentBoundEvent_2_CategoryChanged__DelegateSignature(int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Bookmark_C", "BndEvt__LibraryMenu_Bookmark_CategoryList_Type1_K2Node_ComponentBoundEvent_2_CategoryChanged__DelegateSignature");

	Params::LibraryMenu_Bookmark_C_BndEvt__LibraryMenu_Bookmark_CategoryList_Type1_K2Node_ComponentBoundEvent_2_CategoryChanged__DelegateSignature Parms{};

	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Bookmark.LibraryMenu_Bookmark_C.BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_0_OnTextChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                             NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void ULibraryMenu_Bookmark_C::BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_0_OnTextChange__DelegateSignature(const class FText& NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Bookmark_C", "BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_0_OnTextChange__DelegateSignature");

	Params::LibraryMenu_Bookmark_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_0_OnTextChange__DelegateSignature Parms{};

	Parms.NewParam = std::move(NewParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Bookmark.LibraryMenu_Bookmark_C.ClickListItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ListIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Bookmark_C::ClickListItem(int32 ListIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Bookmark_C", "ClickListItem");

	Params::LibraryMenu_Bookmark_C_ClickListItem Parms{};

	Parms.ListIndex = ListIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Bookmark.LibraryMenu_Bookmark_C.CreateList
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Bookmark_C::CreateList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Bookmark_C", "CreateList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Bookmark.LibraryMenu_Bookmark_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULibraryMenu_Bookmark_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Bookmark_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Bookmark.LibraryMenu_Bookmark_C.ResetMouseCursorTypeToDefaultRequest
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Bookmark_C::ResetMouseCursorTypeToDefaultRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Bookmark_C", "ResetMouseCursorTypeToDefaultRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Bookmark.LibraryMenu_Bookmark_C.OnSubMenuUpdate
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MainPage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SubPage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Bookmark_C::OnSubMenuUpdate(int32 MainPage, int32 SubPage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Bookmark_C", "OnSubMenuUpdate");

	Params::LibraryMenu_Bookmark_C_OnSubMenuUpdate Parms{};

	Parms.MainPage = MainPage;
	Parms.SubPage = SubPage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Bookmark.LibraryMenu_Bookmark_C.OnSameMenuBookmarkAccessNew
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InBookMarkType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ULibraryMenu_Bookmark_C::OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Bookmark_C", "OnSameMenuBookmarkAccessNew");

	Params::LibraryMenu_Bookmark_C_OnSameMenuBookmarkAccessNew Parms{};

	Parms.InBookMarkType = std::move(InBookMarkType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Bookmark.LibraryMenu_Bookmark_C.OnRMShopClosed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Bookmark_C::OnRMShopClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Bookmark_C", "OnRMShopClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Bookmark.LibraryMenu_Bookmark_C.OnParentTerm
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Bookmark_C::OnParentTerm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Bookmark_C", "OnParentTerm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Bookmark.LibraryMenu_Bookmark_C.CreateCategoryList
// (Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Bookmark_C::CreateCategoryList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Bookmark_C", "CreateCategoryList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Bookmark.LibraryMenu_Bookmark_C.IsAllReadCategory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CategoryIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ULibraryMenu_Bookmark_C::IsAllReadCategory(int32 CategoryIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Bookmark_C", "IsAllReadCategory");

	Params::LibraryMenu_Bookmark_C_IsAllReadCategory Parms{};

	Parms.CategoryIndex = CategoryIndex;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function LibraryMenu_Bookmark.LibraryMenu_Bookmark_C.IsReadListItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ItemName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ULibraryMenu_Bookmark_C::IsReadListItem(class FName ItemName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Bookmark_C", "IsReadListItem");

	Params::LibraryMenu_Bookmark_C_IsReadListItem Parms{};

	Parms.ItemName = ItemName;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function LibraryMenu_Bookmark.LibraryMenu_Bookmark_C.UpdateNewIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Dimension_1                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Bookmark_C::UpdateNewIcon(int32 Dimension_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Bookmark_C", "UpdateNewIcon");

	Params::LibraryMenu_Bookmark_C_UpdateNewIcon Parms{};

	Parms.Dimension_1 = Dimension_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Bookmark.LibraryMenu_Bookmark_C.IsReadCategory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CategoryType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReadId                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsRead                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_Bookmark_C::IsReadCategory(int32 ID, int32 CategoryType, int32* ReadId, bool* IsRead)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Bookmark_C", "IsReadCategory");

	Params::LibraryMenu_Bookmark_C_IsReadCategory Parms{};

	Parms.ID = ID;
	Parms.CategoryType = CategoryType;

	UObject::ProcessEvent(Func, &Parms);

	if (ReadId != nullptr)
		*ReadId = Parms.ReadId;

	if (IsRead != nullptr)
		*IsRead = Parms.IsRead;
}


// Function LibraryMenu_Bookmark.LibraryMenu_Bookmark_C.IsAllRead
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ULibraryMenu_Bookmark_C::IsAllRead()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Bookmark_C", "IsAllRead");

	Params::LibraryMenu_Bookmark_C_IsAllRead Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function LibraryMenu_Bookmark.LibraryMenu_Bookmark_C.TermRequest
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESubMenuTermReason                      InReason                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESubMenuTermRequestReply                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESubMenuTermRequestReply ULibraryMenu_Bookmark_C::TermRequest(const ESubMenuTermReason InReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Bookmark_C", "TermRequest");

	Params::LibraryMenu_Bookmark_C_TermRequest Parms{};

	Parms.InReason = InReason;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

