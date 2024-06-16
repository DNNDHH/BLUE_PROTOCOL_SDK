#pragma once

 

// Package: LibraryMenu_Imagine

#include "Basic.hpp"

#include "LibraryMenu_Imagine_classes.hpp"
#include "LibraryMenu_Imagine_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.AllReadImagine__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Imagine_C::AllReadImagine__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Imagine_C", "AllReadImagine__DelegateSignature");

	Params::LibraryMenu_Imagine_C_AllReadImagine__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.ExecuteUbergraph_LibraryMenu_Imagine
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Imagine_C::ExecuteUbergraph_LibraryMenu_Imagine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Imagine_C", "ExecuteUbergraph_LibraryMenu_Imagine");

	Params::LibraryMenu_Imagine_C_ExecuteUbergraph_LibraryMenu_Imagine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.GetIdListCallback
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    WasSuccessful                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBLibraryPictureBookType               Type                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Imagine_C::GetIdListCallback(bool WasSuccessful, int32 RetCode, const ESBLibraryPictureBookType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Imagine_C", "GetIdListCallback");

	Params::LibraryMenu_Imagine_C_GetIdListCallback Parms{};

	Parms.WasSuccessful = WasSuccessful;
	Parms.RetCode = RetCode;
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Imagine_SBButton_C_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Imagine_C::BndEvt__LibraryMenu_Imagine_SBButton_C_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Imagine_C", "BndEvt__LibraryMenu_Imagine_SBButton_C_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.CloseFilter
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Imagine_C::CloseFilter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Imagine_C", "CloseFilter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Imagine_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Imagine_C::BndEvt__LibraryMenu_Imagine_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Imagine_C", "BndEvt__LibraryMenu_Imagine_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Imagine_FilterSelector_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Imagine_C::BndEvt__LibraryMenu_Imagine_FilterSelector_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Imagine_C", "BndEvt__LibraryMenu_Imagine_FilterSelector_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Imagine_FilterSelector_K2Node_ComponentBoundEvent_4_OnFilterApply__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FFilterGroup>             Filters                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ULibraryMenu_Imagine_C::BndEvt__LibraryMenu_Imagine_FilterSelector_K2Node_ComponentBoundEvent_4_OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>& Filters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Imagine_C", "BndEvt__LibraryMenu_Imagine_FilterSelector_K2Node_ComponentBoundEvent_4_OnFilterApply__DelegateSignature");

	Params::LibraryMenu_Imagine_C_BndEvt__LibraryMenu_Imagine_FilterSelector_K2Node_ComponentBoundEvent_4_OnFilterApply__DelegateSignature Parms{};

	Parms.Filters = std::move(Filters);

	UObject::ProcessEvent(Func, &Parms);

	Filters = std::move(Parms.Filters);
}


// Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Imagine_FilterSelectorBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Imagine_C::BndEvt__LibraryMenu_Imagine_FilterSelectorBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Imagine_C", "BndEvt__LibraryMenu_Imagine_FilterSelectorBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.OnParentTerm
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Imagine_C::OnParentTerm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Imagine_C", "OnParentTerm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.OnRMShopClosed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Imagine_C::OnRMShopClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Imagine_C", "OnRMShopClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Imagine_LibraryMenu_ImagineDetails_K2Node_ComponentBoundEvent_12_OnClickZoomIn__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Imagine_C::BndEvt__LibraryMenu_Imagine_LibraryMenu_ImagineDetails_K2Node_ComponentBoundEvent_12_OnClickZoomIn__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Imagine_C", "BndEvt__LibraryMenu_Imagine_LibraryMenu_ImagineDetails_K2Node_ComponentBoundEvent_12_OnClickZoomIn__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Imagine_LibraryMenu_ImagineDetails_K2Node_ComponentBoundEvent_11_OnRecipeTabRead__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Imagine_C::BndEvt__LibraryMenu_Imagine_LibraryMenu_ImagineDetails_K2Node_ComponentBoundEvent_11_OnRecipeTabRead__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Imagine_C", "BndEvt__LibraryMenu_Imagine_LibraryMenu_ImagineDetails_K2Node_ComponentBoundEvent_11_OnRecipeTabRead__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.OnSameMenuBookmarkAccessNew
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InBookMarkType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ULibraryMenu_Imagine_C::OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Imagine_C", "OnSameMenuBookmarkAccessNew");

	Params::LibraryMenu_Imagine_C_OnSameMenuBookmarkAccessNew Parms{};

	Parms.InBookMarkType = std::move(InBookMarkType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.OnSubMenuUpdate
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MainPage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SubPage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Imagine_C::OnSubMenuUpdate(int32 MainPage, int32 SubPage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Imagine_C", "OnSubMenuUpdate");

	Params::LibraryMenu_Imagine_C_OnSubMenuUpdate Parms{};

	Parms.MainPage = MainPage;
	Parms.SubPage = SubPage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Weapon_SBButton_C_356_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Imagine_C::BndEvt__LibraryMenu_Weapon_SBButton_C_356_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Imagine_C", "BndEvt__LibraryMenu_Weapon_SBButton_C_356_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.ResetMouseCursorTypeToDefaultRequest
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Imagine_C::ResetMouseCursorTypeToDefaultRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Imagine_C", "ResetMouseCursorTypeToDefaultRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULibraryMenu_Imagine_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Imagine_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Weapon_UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_1_OnClickZoomOut__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Imagine_C::BndEvt__LibraryMenu_Weapon_UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_1_OnClickZoomOut__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Imagine_C", "BndEvt__LibraryMenu_Weapon_UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_1_OnClickZoomOut__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Weapon_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Imagine_C::BndEvt__LibraryMenu_Weapon_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature(int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Imagine_C", "BndEvt__LibraryMenu_Weapon_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature");

	Params::LibraryMenu_Imagine_C_BndEvt__LibraryMenu_Weapon_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature Parms{};

	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                             NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void ULibraryMenu_Imagine_C::BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature(const class FText& NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Imagine_C", "BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature");

	Params::LibraryMenu_Imagine_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature Parms{};

	Parms.NewParam = std::move(NewParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.OnClickImagineEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ListIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Imagine_C::OnClickImagineEvent(int32 ListIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Imagine_C", "OnClickImagineEvent");

	Params::LibraryMenu_Imagine_C_OnClickImagineEvent Parms{};

	Parms.ListIndex = ListIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.CreateCategoryList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Imagine_C::CreateCategoryList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Imagine_C", "CreateCategoryList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.CreateImagineList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Imagine_C::CreateImagineList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Imagine_C", "CreateImagineList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.IsSecretItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ImagineId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_Imagine_C::IsSecretItem(int32 ImagineId, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Imagine_C", "IsSecretItem");

	Params::LibraryMenu_Imagine_C_IsSecretItem Parms{};

	Parms.ImagineId = ImagineId;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.UpdateCategoryNewIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InListIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsCheckAllRead                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_Imagine_C::UpdateCategoryNewIcon(int32 InListIndex, bool IsCheckAllRead)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Imagine_C", "UpdateCategoryNewIcon");

	Params::LibraryMenu_Imagine_C_UpdateCategoryNewIcon Parms{};

	Parms.InListIndex = InListIndex;
	Parms.IsCheckAllRead = IsCheckAllRead;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.UpdateFilter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFilterGroup>             Filter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ULibraryMenu_Imagine_C::UpdateFilter(TArray<struct FFilterGroup>& Filter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Imagine_C", "UpdateFilter");

	Params::LibraryMenu_Imagine_C_UpdateFilter Parms{};

	Parms.Filter = std::move(Filter);

	UObject::ProcessEvent(Func, &Parms);

	Filter = std::move(Parms.Filter);
}


// Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.TermRequest
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESubMenuTermReason                      InReason                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESubMenuTermRequestReply                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESubMenuTermRequestReply ULibraryMenu_Imagine_C::TermRequest(const ESubMenuTermReason InReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Imagine_C", "TermRequest");

	Params::LibraryMenu_Imagine_C_TermRequest Parms{};

	Parms.InReason = InReason;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

