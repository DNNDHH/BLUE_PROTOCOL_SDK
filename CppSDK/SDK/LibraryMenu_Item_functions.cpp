#pragma once

 

// Package: LibraryMenu_Item

#include "Basic.hpp"

#include "LibraryMenu_Item_classes.hpp"
#include "LibraryMenu_Item_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_Item.LibraryMenu_Item_C.AllReadItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Item_C::AllReadItem__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Item_C", "AllReadItem__DelegateSignature");

	Params::LibraryMenu_Item_C_AllReadItem__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Item.LibraryMenu_Item_C.ExecuteUbergraph_LibraryMenu_Item
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Item_C::ExecuteUbergraph_LibraryMenu_Item(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Item_C", "ExecuteUbergraph_LibraryMenu_Item");

	Params::LibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Item.LibraryMenu_Item_C.GetIdListCallback
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    WasSuccessful                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBLibraryPictureBookType               Type                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Item_C::GetIdListCallback(bool WasSuccessful, int32 RetCode, const ESBLibraryPictureBookType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Item_C", "GetIdListCallback");

	Params::LibraryMenu_Item_C_GetIdListCallback Parms{};

	Parms.WasSuccessful = WasSuccessful;
	Parms.RetCode = RetCode;
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_SBButton_C_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Item_C::BndEvt__LibraryMenu_Item_SBButton_C_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Item_C", "BndEvt__LibraryMenu_Item_SBButton_C_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_7_OnMakeListAllRead__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Item_C::BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_7_OnMakeListAllRead__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Item_C", "BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_7_OnMakeListAllRead__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_SBButton_C_356_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Item_C::BndEvt__LibraryMenu_Item_SBButton_C_356_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Item_C", "BndEvt__LibraryMenu_Item_SBButton_C_356_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_6_OnChangeFilter__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EPictureBookMakeListSortType            SortType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Item_C::BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_6_OnChangeFilter__DelegateSignature(EPictureBookMakeListSortType SortType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Item_C", "BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_6_OnChangeFilter__DelegateSignature");

	Params::LibraryMenu_Item_C_BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_6_OnChangeFilter__DelegateSignature Parms{};

	Parms.SortType = SortType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_4_OnFilterSelectorBtn__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Item_C::BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_4_OnFilterSelectorBtn__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Item_C", "BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_4_OnFilterSelectorBtn__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Item.LibraryMenu_Item_C.CloseFilter
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Item_C::CloseFilter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Item_C", "CloseFilter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Item_C::BndEvt__LibraryMenu_Item_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Item_C", "BndEvt__LibraryMenu_Item_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_FilterSelector_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Item_C::BndEvt__LibraryMenu_Item_FilterSelector_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Item_C", "BndEvt__LibraryMenu_Item_FilterSelector_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_FilterSelector_K2Node_ComponentBoundEvent_1_OnFilterApply__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FFilterGroup>             Filters                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ULibraryMenu_Item_C::BndEvt__LibraryMenu_Item_FilterSelector_K2Node_ComponentBoundEvent_1_OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>& Filters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Item_C", "BndEvt__LibraryMenu_Item_FilterSelector_K2Node_ComponentBoundEvent_1_OnFilterApply__DelegateSignature");

	Params::LibraryMenu_Item_C_BndEvt__LibraryMenu_Item_FilterSelector_K2Node_ComponentBoundEvent_1_OnFilterApply__DelegateSignature Parms{};

	Parms.Filters = std::move(Filters);

	UObject::ProcessEvent(Func, &Parms);

	Filters = std::move(Parms.Filters);
}


// Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Item_C::BndEvt__LibraryMenu_Item_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature(int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Item_C", "BndEvt__LibraryMenu_Item_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature");

	Params::LibraryMenu_Item_C_BndEvt__LibraryMenu_Item_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature Parms{};

	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Item.LibraryMenu_Item_C.OnParentTerm
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Item_C::OnParentTerm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Item_C", "OnParentTerm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Item.LibraryMenu_Item_C.OnRMShopClosed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Item_C::OnRMShopClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Item_C", "OnRMShopClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Item.LibraryMenu_Item_C.OnSameMenuBookmarkAccessNew
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InBookMarkType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ULibraryMenu_Item_C::OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Item_C", "OnSameMenuBookmarkAccessNew");

	Params::LibraryMenu_Item_C_OnSameMenuBookmarkAccessNew Parms{};

	Parms.InBookMarkType = std::move(InBookMarkType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Item.LibraryMenu_Item_C.OnSubMenuUpdate
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MainPage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SubPage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Item_C::OnSubMenuUpdate(int32 MainPage, int32 SubPage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Item_C", "OnSubMenuUpdate");

	Params::LibraryMenu_Item_C_OnSubMenuUpdate Parms{};

	Parms.MainPage = MainPage;
	Parms.SubPage = SubPage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Item.LibraryMenu_Item_C.OnClickEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ListIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Item_C::OnClickEvent(int32 ListIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Item_C", "OnClickEvent");

	Params::LibraryMenu_Item_C_OnClickEvent Parms{};

	Parms.ListIndex = ListIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                             NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void ULibraryMenu_Item_C::BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature(const class FText& NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Item_C", "BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature");

	Params::LibraryMenu_Item_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature Parms{};

	Parms.NewParam = std::move(NewParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Item.LibraryMenu_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULibraryMenu_Item_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Item_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Item.LibraryMenu_Item_C.ResetMouseCursorTypeToDefaultRequest
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Item_C::ResetMouseCursorTypeToDefaultRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Item_C", "ResetMouseCursorTypeToDefaultRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Item.LibraryMenu_Item_C.CreateCategoryList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Item_C::CreateCategoryList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Item_C", "CreateCategoryList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Item.LibraryMenu_Item_C.CreateItemList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Item_C::CreateItemList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Item_C", "CreateItemList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Item.LibraryMenu_Item_C.UpdateListItemNewIcon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemIndex                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Item_C::UpdateListItemNewIcon(const int32& ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Item_C", "UpdateListItemNewIcon");

	Params::LibraryMenu_Item_C_UpdateListItemNewIcon Parms{};

	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Item.LibraryMenu_Item_C.UpdateCategoryNewIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InCategoryId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InListIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsCheckAllRead                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_Item_C::UpdateCategoryNewIcon(int32 InCategoryId, int32 InListIndex, bool IsCheckAllRead)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Item_C", "UpdateCategoryNewIcon");

	Params::LibraryMenu_Item_C_UpdateCategoryNewIcon Parms{};

	Parms.InCategoryId = InCategoryId;
	Parms.InListIndex = InListIndex;
	Parms.IsCheckAllRead = IsCheckAllRead;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Item.LibraryMenu_Item_C.IsSecretItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_Item_C::IsSecretItem(int32 ItemId, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Item_C", "IsSecretItem");

	Params::LibraryMenu_Item_C_IsSecretItem Parms{};

	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function LibraryMenu_Item.LibraryMenu_Item_C.TermRequest
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESubMenuTermReason                      InReason                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESubMenuTermRequestReply                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESubMenuTermRequestReply ULibraryMenu_Item_C::TermRequest(const ESubMenuTermReason InReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Item_C", "TermRequest");

	Params::LibraryMenu_Item_C_TermRequest Parms{};

	Parms.InReason = InReason;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

