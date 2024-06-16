#pragma once

 

// Package: LibraryMenu_Weapon

#include "Basic.hpp"

#include "LibraryMenu_Weapon_classes.hpp"
#include "LibraryMenu_Weapon_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.AllReadWeapon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Weapon_C::AllReadWeapon__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Weapon_C", "AllReadWeapon__DelegateSignature");

	Params::LibraryMenu_Weapon_C_AllReadWeapon__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.ExecuteUbergraph_LibraryMenu_Weapon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Weapon_C::ExecuteUbergraph_LibraryMenu_Weapon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Weapon_C", "ExecuteUbergraph_LibraryMenu_Weapon");

	Params::LibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.GetIdListCallback
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    WasSuccessful                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBLibraryPictureBookType               Type                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Weapon_C::GetIdListCallback(bool WasSuccessful, int32 RetCode, const ESBLibraryPictureBookType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Weapon_C", "GetIdListCallback");

	Params::LibraryMenu_Weapon_C_GetIdListCallback Parms{};

	Parms.WasSuccessful = WasSuccessful;
	Parms.RetCode = RetCode;
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.BndEvt__LibraryMenu_Weapon_SBButton_C_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Weapon_C::BndEvt__LibraryMenu_Weapon_SBButton_C_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Weapon_C", "BndEvt__LibraryMenu_Weapon_SBButton_C_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.OnParentTerm
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Weapon_C::OnParentTerm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Weapon_C", "OnParentTerm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.OnRMShopClosed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Weapon_C::OnRMShopClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Weapon_C", "OnRMShopClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.OnSameMenuBookmarkAccessNew
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InBookMarkType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ULibraryMenu_Weapon_C::OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Weapon_C", "OnSameMenuBookmarkAccessNew");

	Params::LibraryMenu_Weapon_C_OnSameMenuBookmarkAccessNew Parms{};

	Parms.InBookMarkType = std::move(InBookMarkType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.OnSubMenuUpdate
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MainPage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SubPage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Weapon_C::OnSubMenuUpdate(int32 MainPage, int32 SubPage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Weapon_C", "OnSubMenuUpdate");

	Params::LibraryMenu_Weapon_C_OnSubMenuUpdate Parms{};

	Parms.MainPage = MainPage;
	Parms.SubPage = SubPage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.ResetMouseCursorTypeToDefaultRequest
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Weapon_C::ResetMouseCursorTypeToDefaultRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Weapon_C", "ResetMouseCursorTypeToDefaultRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULibraryMenu_Weapon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Weapon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.BndEvt__LibraryMenu_Weapon_LibraryMenu_WeaponDetails_K2Node_ComponentBoundEvent_4_OnRecipeTabRead__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Weapon_C::BndEvt__LibraryMenu_Weapon_LibraryMenu_WeaponDetails_K2Node_ComponentBoundEvent_4_OnRecipeTabRead__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Weapon_C", "BndEvt__LibraryMenu_Weapon_LibraryMenu_WeaponDetails_K2Node_ComponentBoundEvent_4_OnRecipeTabRead__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                             NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void ULibraryMenu_Weapon_C::BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature(const class FText& NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Weapon_C", "BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature");

	Params::LibraryMenu_Weapon_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature Parms{};

	Parms.NewParam = std::move(NewParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.BndEvt__LibraryMenu_Weapon_SBButton_C_356_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Weapon_C::BndEvt__LibraryMenu_Weapon_SBButton_C_356_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Weapon_C", "BndEvt__LibraryMenu_Weapon_SBButton_C_356_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.OnClickWeaponEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ListIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Weapon_C::OnClickWeaponEvent(int32 ListIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Weapon_C", "OnClickWeaponEvent");

	Params::LibraryMenu_Weapon_C_OnClickWeaponEvent Parms{};

	Parms.ListIndex = ListIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.BndEvt__LibraryMenu_Weapon_LibraryMenu_WeaponDetails_K2Node_ComponentBoundEvent_2_OnClickZoomIn__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Weapon_C::BndEvt__LibraryMenu_Weapon_LibraryMenu_WeaponDetails_K2Node_ComponentBoundEvent_2_OnClickZoomIn__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Weapon_C", "BndEvt__LibraryMenu_Weapon_LibraryMenu_WeaponDetails_K2Node_ComponentBoundEvent_2_OnClickZoomIn__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.BndEvt__LibraryMenu_Weapon_UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_1_OnClickZoomOut__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Weapon_C::BndEvt__LibraryMenu_Weapon_UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_1_OnClickZoomOut__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Weapon_C", "BndEvt__LibraryMenu_Weapon_UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_1_OnClickZoomOut__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.BndEvt__LibraryMenu_Weapon_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Weapon_C::BndEvt__LibraryMenu_Weapon_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature(int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Weapon_C", "BndEvt__LibraryMenu_Weapon_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature");

	Params::LibraryMenu_Weapon_C_BndEvt__LibraryMenu_Weapon_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature Parms{};

	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.CreateCategoryList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Weapon_C::CreateCategoryList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Weapon_C", "CreateCategoryList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.CreateWeaponList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Weapon_C::CreateWeaponList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Weapon_C", "CreateWeaponList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.IsSecretItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   WeaponID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_Weapon_C::IsSecretItem(int32 WeaponID, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Weapon_C", "IsSecretItem");

	Params::LibraryMenu_Weapon_C_IsSecretItem Parms{};

	Parms.WeaponID = WeaponID;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.UpdateCategoryNewIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InCategoryId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InListIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsCheckAllRead                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_Weapon_C::UpdateCategoryNewIcon(int32 InCategoryId, int32 InListIndex, bool IsCheckAllRead)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Weapon_C", "UpdateCategoryNewIcon");

	Params::LibraryMenu_Weapon_C_UpdateCategoryNewIcon Parms{};

	Parms.InCategoryId = InCategoryId;
	Parms.InListIndex = InListIndex;
	Parms.IsCheckAllRead = IsCheckAllRead;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.CreateData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Weapon_C::CreateData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Weapon_C", "CreateData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.TermRequest
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESubMenuTermReason                      InReason                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESubMenuTermRequestReply                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESubMenuTermRequestReply ULibraryMenu_Weapon_C::TermRequest(const ESubMenuTermReason InReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Weapon_C", "TermRequest");

	Params::LibraryMenu_Weapon_C_TermRequest Parms{};

	Parms.InReason = InReason;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

