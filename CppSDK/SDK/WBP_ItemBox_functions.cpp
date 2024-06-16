#pragma once

 

// Package: WBP_ItemBox

#include "Basic.hpp"

#include "WBP_ItemBox_classes.hpp"
#include "WBP_ItemBox_parameters.hpp"


namespace SDK
{

// Function WBP_ItemBox.WBP_ItemBox_C.OnEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENumberInputDialogResult                NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ItemBox_C*                   ItemBox                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemBox_C::OnEnd__DelegateSignature(ENumberInputDialogResult NewParam, class UWBP_ItemBox_C* ItemBox)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "OnEnd__DelegateSignature");

	Params::WBP_ItemBox_C_OnEnd__DelegateSignature Parms{};

	Parms.NewParam = NewParam;
	Parms.ItemBox = ItemBox;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBox.WBP_ItemBox_C.ExecuteUbergraph_WBP_ItemBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemBox_C::ExecuteUbergraph_WBP_ItemBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "ExecuteUbergraph_WBP_ItemBox");

	Params::WBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBox.WBP_ItemBox_C.BndEvt__WBP_ItemBox_CmnClose02_K2Node_ComponentBoundEvent_7_OnClosed__DelegateSignature
// (BlueprintEvent)

void UWBP_ItemBox_C::BndEvt__WBP_ItemBox_CmnClose02_K2Node_ComponentBoundEvent_7_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "BndEvt__WBP_ItemBox_CmnClose02_K2Node_ComponentBoundEvent_7_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBox.WBP_ItemBox_C.BndEvt__Button1_OK_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ItemBox_C::BndEvt__Button1_OK_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "BndEvt__Button1_OK_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBox.WBP_ItemBox_C.BndEvt__Button1_OK_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ItemBox_C::BndEvt__Button1_OK_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "BndEvt__Button1_OK_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBox.WBP_ItemBox_C.Start
// (BlueprintCallable, BlueprintEvent)

void UWBP_ItemBox_C::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "Start");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBox.WBP_ItemBox_C.LoadRequestRemove
// (BlueprintCallable, BlueprintEvent)

void UWBP_ItemBox_C::LoadRequestRemove()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "LoadRequestRemove");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBox.WBP_ItemBox_C.LoadRequestAdd
// (BlueprintCallable, BlueprintEvent)

void UWBP_ItemBox_C::LoadRequestAdd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "LoadRequestAdd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBox.WBP_ItemBox_C.RequestGetCryptocurrency
// (BlueprintCallable, BlueprintEvent)

void UWBP_ItemBox_C::RequestGetCryptocurrency()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "RequestGetCryptocurrency");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBox.WBP_ItemBox_C.OnGetCryptocurrency_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Result                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBCryptoCurrency                Cryptocurrency                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UWBP_ItemBox_C::OnGetCryptocurrency_Event(const bool Param_Result, const int32 RetCode, const struct FSBCryptoCurrency& Cryptocurrency)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "OnGetCryptocurrency_Event");

	Params::WBP_ItemBox_C_OnGetCryptocurrency_Event Parms{};

	Parms.Param_Result = Param_Result;
	Parms.RetCode = RetCode;
	Parms.Cryptocurrency = std::move(Cryptocurrency);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBox.WBP_ItemBox_C.CustomEvent_1
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Result                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FSBAchievementInfo>       AchievementList                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ItemBox_C::CustomEvent_1(const bool Param_Result, const TArray<struct FSBAchievementInfo>& AchievementList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "CustomEvent_1");

	Params::WBP_ItemBox_C_CustomEvent_1 Parms{};

	Parms.Param_Result = Param_Result;
	Parms.AchievementList = std::move(AchievementList);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBox.WBP_ItemBox_C.RequestAchievement
// (BlueprintCallable, BlueprintEvent)

void UWBP_ItemBox_C::RequestAchievement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "RequestAchievement");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBox.WBP_ItemBox_C.InitData
// (BlueprintCallable, BlueprintEvent)

void UWBP_ItemBox_C::InitData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "InitData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBox.WBP_ItemBox_C.BndEvt__CheckBox_Money_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ItemBox_C::BndEvt__CheckBox_Money_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "BndEvt__CheckBox_Money_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::WBP_ItemBox_C_BndEvt__CheckBox_Money_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBox.WBP_ItemBox_C.UpdateSelectNum
// (BlueprintCallable, BlueprintEvent)

void UWBP_ItemBox_C::UpdateSelectNum()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "UpdateSelectNum");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBox.WBP_ItemBox_C.CreateSelectItemScrollList
// (BlueprintCallable, BlueprintEvent)

void UWBP_ItemBox_C::CreateSelectItemScrollList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "CreateSelectItemScrollList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBox.WBP_ItemBox_C.IconAllSelect
// (BlueprintCallable, BlueprintEvent)

void UWBP_ItemBox_C::IconAllSelect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "IconAllSelect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBox.WBP_ItemBox_C.CreateSelectGetList
// (BlueprintCallable, BlueprintEvent)

void UWBP_ItemBox_C::CreateSelectGetList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "CreateSelectGetList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBox.WBP_ItemBox_C.UpdateEquipmentWarning
// (BlueprintCallable, BlueprintEvent)

void UWBP_ItemBox_C::UpdateEquipmentWarning()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "UpdateEquipmentWarning");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBox.WBP_ItemBox_C.BndEvt__CheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ItemBox_C::BndEvt__CheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "BndEvt__CheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::WBP_ItemBox_C_BndEvt__CheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBox.WBP_ItemBox_C.UpdateOKButton
// (BlueprintCallable, BlueprintEvent)

void UWBP_ItemBox_C::UpdateOKButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "UpdateOKButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBox.WBP_ItemBox_C.UpdateStackOverCheck
// (BlueprintCallable, BlueprintEvent)

void UWBP_ItemBox_C::UpdateStackOverCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "UpdateStackOverCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBox.WBP_ItemBox_C.ScrollListReset
// (BlueprintCallable, BlueprintEvent)

void UWBP_ItemBox_C::ScrollListReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "ScrollListReset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBox.WBP_ItemBox_C.CreateRandomGetList
// (BlueprintCallable, BlueprintEvent)

void UWBP_ItemBox_C::CreateRandomGetList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "CreateRandomGetList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBox.WBP_ItemBox_C.CreateAllGetList
// (BlueprintCallable, BlueprintEvent)

void UWBP_ItemBox_C::CreateAllGetList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "CreateAllGetList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBox.WBP_ItemBox_C.UpdateList
// (BlueprintCallable, BlueprintEvent)

void UWBP_ItemBox_C::UpdateList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "UpdateList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBox.WBP_ItemBox_C.SetSelectButtonNumAndGray
// (BlueprintCallable, BlueprintEvent)

void UWBP_ItemBox_C::SetSelectButtonNumAndGray()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "SetSelectButtonNumAndGray");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBox.WBP_ItemBox_C.ItemSetting
// (BlueprintCallable, BlueprintEvent)

void UWBP_ItemBox_C::ItemSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "ItemSetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBox.WBP_ItemBox_C.DataInitialize
// (BlueprintCallable, BlueprintEvent)

void UWBP_ItemBox_C::DataInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "DataInitialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBox.WBP_ItemBox_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_ItemBoxIcon_C*               Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemBox_C::CustomEvent_0(class UWBP_ItemBoxIcon_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "CustomEvent_0");

	Params::WBP_ItemBox_C_CustomEvent_0 Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBox.WBP_ItemBox_C.ItemIconSetting
// (BlueprintCallable, BlueprintEvent)

void UWBP_ItemBox_C::ItemIconSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "ItemIconSetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBox.WBP_ItemBox_C.BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ItemBox_C::BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBox.WBP_ItemBox_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ItemBox_C::BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBox.WBP_ItemBox_C.OnDestructMainWidget
// (Event, Public, BlueprintEvent)

void UWBP_ItemBox_C::OnDestructMainWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "OnDestructMainWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBox.WBP_ItemBox_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemBox_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "OnAnimationFinished");

	Params::WBP_ItemBox_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBox.WBP_ItemBox_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UWBP_ItemBox_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBox.WBP_ItemBox_C.HideDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPlayCloseSe                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ItemBox_C::HideDialog(bool bPlayCloseSe)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "HideDialog");

	Params::WBP_ItemBox_C_HideDialog Parms{};

	Parms.bPlayCloseSe = bPlayCloseSe;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBox.WBP_ItemBox_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ItemBox_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBox.WBP_ItemBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ItemBox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemBox.WBP_ItemBox_C.Get Scroll List Item
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_ItemBoxScrollText_Wrapper_C* AsWBP_Item_Box_Scroll_Text                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemBox_C::Get_Scroll_List_Item(class UWBP_ItemBoxScrollText_Wrapper_C** AsWBP_Item_Box_Scroll_Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "Get Scroll List Item");

	Params::WBP_ItemBox_C_Get_Scroll_List_Item Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AsWBP_Item_Box_Scroll_Text != nullptr)
		*AsWBP_Item_Box_Scroll_Text = Parms.AsWBP_Item_Box_Scroll_Text;
}


// Function WBP_ItemBox.WBP_ItemBox_C.Get Select Item Type List
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_ItemBoxDestinationType                DestinationType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_ItemBoxIcon_C*>       ItemList                                               (Parm, OutParm, ContainsInstancedReference)

void UWBP_ItemBox_C::Get_Select_Item_Type_List(E_ItemBoxDestinationType DestinationType, TArray<class UWBP_ItemBoxIcon_C*>* ItemList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "Get Select Item Type List");

	Params::WBP_ItemBox_C_Get_Select_Item_Type_List Parms{};

	Parms.DestinationType = DestinationType;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemList != nullptr)
		*ItemList = std::move(Parms.ItemList);
}


// Function WBP_ItemBox.WBP_ItemBox_C.Get Select Other Type List
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWBP_ItemBoxIcon_C*>       ItemList                                               (Parm, OutParm, ContainsInstancedReference)

void UWBP_ItemBox_C::Get_Select_Other_Type_List(TArray<class UWBP_ItemBoxIcon_C*>* ItemList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "Get Select Other Type List");

	Params::WBP_ItemBox_C_Get_Select_Other_Type_List Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ItemList != nullptr)
		*ItemList = std::move(Parms.ItemList);
}


// Function WBP_ItemBox.WBP_ItemBox_C.Add Item Storage Scroll List
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsOver                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bISCanNotLost                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ItemBox_C::Add_Item_Storage_Scroll_List(bool* bIsOver, bool* bISCanNotLost)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "Add Item Storage Scroll List");

	Params::WBP_ItemBox_C_Add_Item_Storage_Scroll_List Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsOver != nullptr)
		*bIsOver = Parms.bIsOver;

	if (bISCanNotLost != nullptr)
		*bISCanNotLost = Parms.bISCanNotLost;
}


// Function WBP_ItemBox.WBP_ItemBox_C.Add Item Bag Scroll List
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_ItemBoxDestinationType                DestinationType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsOver                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ItemBox_C::Add_Item_Bag_Scroll_List(E_ItemBoxDestinationType DestinationType, bool* bIsOver)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "Add Item Bag Scroll List");

	Params::WBP_ItemBox_C_Add_Item_Bag_Scroll_List Parms{};

	Parms.DestinationType = DestinationType;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsOver != nullptr)
		*bIsOver = Parms.bIsOver;
}


// Function WBP_ItemBox.WBP_ItemBox_C.Add Other Belongings
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Over                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Param_CanNotLostOther                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Overlapping                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ItemBox_C::Add_Other_Belongings(bool* Over, bool* Param_CanNotLostOther, bool* Overlapping)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "Add Other Belongings");

	Params::WBP_ItemBox_C_Add_Other_Belongings Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Over != nullptr)
		*Over = Parms.Over;

	if (Param_CanNotLostOther != nullptr)
		*Param_CanNotLostOther = Parms.Param_CanNotLostOther;

	if (Overlapping != nullptr)
		*Overlapping = Parms.Overlapping;
}


// Function WBP_ItemBox.WBP_ItemBox_C.IsDestinationItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EItemType                               ItemType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_ItemBoxDestinationType                Destination                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_Result                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ItemBox_C::IsDestinationItem(int32 ItemId, EItemType ItemType, E_ItemBoxDestinationType Destination, bool* Param_Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "IsDestinationItem");

	Params::WBP_ItemBox_C_IsDestinationItem Parms{};

	Parms.ItemId = ItemId;
	Parms.ItemType = ItemType;
	Parms.Destination = Destination;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Result != nullptr)
		*Param_Result = Parms.Param_Result;
}


// Function WBP_ItemBox.WBP_ItemBox_C.Get Stack Over Sale Over Sale Price
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bOver                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   OverPlaceMax                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bUseMin                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   OverPlaceMin                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   WarrantyPrice                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemBox_C::Get_Stack_Over_Sale_Over_Sale_Price(bool* bOver, int32* OverPlaceMax, bool* bUseMin, int32* OverPlaceMin, int32* WarrantyPrice)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "Get Stack Over Sale Over Sale Price");

	Params::WBP_ItemBox_C_Get_Stack_Over_Sale_Over_Sale_Price Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bOver != nullptr)
		*bOver = Parms.bOver;

	if (OverPlaceMax != nullptr)
		*OverPlaceMax = Parms.OverPlaceMax;

	if (bUseMin != nullptr)
		*bUseMin = Parms.bUseMin;

	if (OverPlaceMin != nullptr)
		*OverPlaceMin = Parms.OverPlaceMin;

	if (WarrantyPrice != nullptr)
		*WarrantyPrice = Parms.WarrantyPrice;
}


// Function WBP_ItemBox.WBP_ItemBox_C.Get Select List
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int32>                           SelectedElement                                        (Parm, OutParm)

void UWBP_ItemBox_C::Get_Select_List(TArray<int32>* SelectedElement)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "Get Select List");

	Params::WBP_ItemBox_C_Get_Select_List Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SelectedElement != nullptr)
		*SelectedElement = std::move(Parms.SelectedElement);
}


// Function WBP_ItemBox.WBP_ItemBox_C.IsAddItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBItemBoxContentParam           SBItemBoxContentParam                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                                    IsAdd                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ItemBox_C::IsAddItem(const struct FSBItemBoxContentParam& SBItemBoxContentParam, bool* IsAdd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "IsAddItem");

	Params::WBP_ItemBox_C_IsAddItem Parms{};

	Parms.SBItemBoxContentParam = std::move(SBItemBoxContentParam);

	UObject::ProcessEvent(Func, &Parms);

	if (IsAdd != nullptr)
		*IsAdd = Parms.IsAdd;
}


// Function WBP_ItemBox.WBP_ItemBox_C.Is Overlapping
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBRewardItemType                       Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bOverlapping                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ItemBox_C::Is_Overlapping(ESBRewardItemType Selection, int32 InId, bool* bOverlapping)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "Is Overlapping");

	Params::WBP_ItemBox_C_Is_Overlapping Parms{};

	Parms.Selection = Selection;
	Parms.InId = InId;

	UObject::ProcessEvent(Func, &Parms);

	if (bOverlapping != nullptr)
		*bOverlapping = Parms.bOverlapping;
}


// Function WBP_ItemBox.WBP_ItemBox_C.Get Item Num
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWBP_ItemBoxIcon_C*>       TargetArray                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// int32                                   NuM                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Max1                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Min1                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemBox_C::Get_Item_Num(const TArray<class UWBP_ItemBoxIcon_C*>& TargetArray, int32* NuM, int32* Max1, int32* Min1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "Get Item Num");

	Params::WBP_ItemBox_C_Get_Item_Num Parms{};

	Parms.TargetArray = std::move(TargetArray);

	UObject::ProcessEvent(Func, &Parms);

	if (NuM != nullptr)
		*NuM = Parms.NuM;

	if (Max1 != nullptr)
		*Max1 = Parms.Max1;

	if (Min1 != nullptr)
		*Min1 = Parms.Min1;
}


// Function WBP_ItemBox.WBP_ItemBox_C.Is Select Item
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSelect                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ItemBox_C::Is_Select_Item(int32 ID, bool* bSelect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "Is Select Item");

	Params::WBP_ItemBox_C_Is_Select_Item Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

	if (bSelect != nullptr)
		*bSelect = Parms.bSelect;
}


// Function WBP_ItemBox.WBP_ItemBox_C.GetAmount_RewardType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBRewardItemType                       Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Amoun                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemBox_C::GetAmount_RewardType(ESBRewardItemType Selection, int32 InId, int32* Amoun)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "GetAmount_RewardType");

	Params::WBP_ItemBox_C_GetAmount_RewardType Parms{};

	Parms.Selection = Selection;
	Parms.InId = InId;

	UObject::ProcessEvent(Func, &Parms);

	if (Amoun != nullptr)
		*Amoun = Parms.Amoun;
}


// Function WBP_ItemBox.WBP_ItemBox_C.Get Item Num_Random
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWBP_ItemBoxIcon_C*>       NewLocalVar_01                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// int32                                   Cnt                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Result                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemBox_C::Get_Item_Num_Random(TArray<class UWBP_ItemBoxIcon_C*>& NewLocalVar_01, int32 Cnt, int32* Param_Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "Get Item Num_Random");

	Params::WBP_ItemBox_C_Get_Item_Num_Random Parms{};

	Parms.NewLocalVar_01 = std::move(NewLocalVar_01);
	Parms.Cnt = Cnt;

	UObject::ProcessEvent(Func, &Parms);

	NewLocalVar_01 = std::move(Parms.NewLocalVar_01);

	if (Param_Result != nullptr)
		*Param_Result = Parms.Param_Result;
}


// Function WBP_ItemBox.WBP_ItemBox_C.IsItemBoxGenderCheck
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsWarning                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ItemBox_C::IsItemBoxGenderCheck(int32 ItemId, bool* IsWarning)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBox_C", "IsItemBoxGenderCheck");

	Params::WBP_ItemBox_C_IsItemBoxGenderCheck Parms{};

	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);

	if (IsWarning != nullptr)
		*IsWarning = Parms.IsWarning;
}

}

