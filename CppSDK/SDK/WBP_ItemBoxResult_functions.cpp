#pragma once

 

// Package: WBP_ItemBoxResult

#include "Basic.hpp"

#include "WBP_ItemBoxResult_classes.hpp"
#include "WBP_ItemBoxResult_parameters.hpp"


namespace SDK
{

// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.OnHide__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENumberInputDialogResult                InResult                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItemData               NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_ItemBoxResult_C::OnHide__DelegateSignature(ENumberInputDialogResult InResult, const struct FInventoryItemData& NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxResult_C", "OnHide__DelegateSignature");

	Params::WBP_ItemBoxResult_C_OnHide__DelegateSignature Parms{};

	Parms.InResult = InResult;
	Parms.NewParam = std::move(NewParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.OnNumSliderUpdeta__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNumberInputDialog_C*             CallerDialg                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemBoxResult_C::OnNumSliderUpdeta__DelegateSignature(int32 Value, class UNumberInputDialog_C* CallerDialg)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxResult_C", "OnNumSliderUpdeta__DelegateSignature");

	Params::WBP_ItemBoxResult_C_OnNumSliderUpdeta__DelegateSignature Parms{};

	Parms.Value = Value;
	Parms.CallerDialg = CallerDialg;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.ExecuteUbergraph_WBP_ItemBoxResult
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemBoxResult_C::ExecuteUbergraph_WBP_ItemBoxResult(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxResult_C", "ExecuteUbergraph_WBP_ItemBoxResult");

	Params::WBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.BndEvt__WBP_ItemBoxResult_SBButtonTransparent_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ItemBoxResult_C::BndEvt__WBP_ItemBoxResult_SBButtonTransparent_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxResult_C", "BndEvt__WBP_ItemBoxResult_SBButtonTransparent_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.BndEvt__WBP_ItemBoxResult_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature
// (BlueprintEvent)

void UWBP_ItemBoxResult_C::BndEvt__WBP_ItemBoxResult_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxResult_C", "BndEvt__WBP_ItemBoxResult_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.SetTitleName
// (BlueprintCallable, BlueprintEvent)

void UWBP_ItemBoxResult_C::SetTitleName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxResult_C", "SetTitleName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.BndEvt__Button1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ItemBoxResult_C::BndEvt__Button1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxResult_C", "BndEvt__Button1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.BndEvt__Button1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ItemBoxResult_C::BndEvt__Button1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxResult_C", "BndEvt__Button1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.BndEvt__ButtonAgain_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ItemBoxResult_C::BndEvt__ButtonAgain_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxResult_C", "BndEvt__ButtonAgain_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.BndEvt__ButtonAgain_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ItemBoxResult_C::BndEvt__ButtonAgain_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxResult_C", "BndEvt__ButtonAgain_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.SetDisappearanceText
// (BlueprintCallable, BlueprintEvent)

void UWBP_ItemBoxResult_C::SetDisappearanceText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxResult_C", "SetDisappearanceText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.SettingButtonAgain
// (BlueprintCallable, BlueprintEvent)

void UWBP_ItemBoxResult_C::SettingButtonAgain()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxResult_C", "SettingButtonAgain");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.CreateResultList
// (BlueprintCallable, BlueprintEvent)

void UWBP_ItemBoxResult_C::CreateResultList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxResult_C", "CreateResultList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.BndEvt__Button1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ItemBoxResult_C::BndEvt__Button1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxResult_C", "BndEvt__Button1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ItemBoxResult_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxResult_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ItemBoxResult_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxResult_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.HideDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPlayCloseSe                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ItemBoxResult_C::HideDialog(bool bPlayCloseSe)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxResult_C", "HideDialog");

	Params::WBP_ItemBoxResult_C_HideDialog Parms{};

	Parms.bPlayCloseSe = bPlayCloseSe;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ItemBoxResult_C::BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxResult_C", "BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.OnDestructMainWidget
// (Event, Public, BlueprintEvent)

void UWBP_ItemBoxResult_C::OnDestructMainWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxResult_C", "OnDestructMainWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemBoxResult_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxResult_C", "OnAnimationFinished");

	Params::WBP_ItemBoxResult_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UWBP_ItemBoxResult_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxResult_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.CreateBagList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_ItemBoxResult_C::CreateBagList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxResult_C", "CreateBagList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.CreateStorageList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_ItemBoxResult_C::CreateStorageList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxResult_C", "CreateStorageList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.SearchSettingAgainItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsBag                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Param_Result                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItemData               IconData                                               (Parm, OutParm, HasGetValueTypeHash)

void UWBP_ItemBoxResult_C::SearchSettingAgainItem(bool IsBag, bool* Param_Result, struct FInventoryItemData* IconData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxResult_C", "SearchSettingAgainItem");

	Params::WBP_ItemBoxResult_C_SearchSettingAgainItem Parms{};

	Parms.IsBag = IsBag;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Result != nullptr)
		*Param_Result = Parms.Param_Result;

	if (IconData != nullptr)
		*IconData = std::move(Parms.IconData);
}


// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.CreateItemScrollList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_ItemBoxResult_C::CreateItemScrollList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxResult_C", "CreateItemScrollList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.GetSettingAgainItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Result                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItemData               IconData                                               (Parm, OutParm, HasGetValueTypeHash)

void UWBP_ItemBoxResult_C::GetSettingAgainItem(bool* Param_Result, struct FInventoryItemData* IconData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxResult_C", "GetSettingAgainItem");

	Params::WBP_ItemBoxResult_C_GetSettingAgainItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Result != nullptr)
		*Param_Result = Parms.Param_Result;

	if (IconData != nullptr)
		*IconData = std::move(Parms.IconData);
}


// Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.Is Disappearance
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bDisappearance                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ItemBoxResult_C::Is_Disappearance(bool* bDisappearance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxResult_C", "Is Disappearance");

	Params::WBP_ItemBoxResult_C_Is_Disappearance Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bDisappearance != nullptr)
		*bDisappearance = Parms.bDisappearance;
}

}

