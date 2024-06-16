#pragma once

 

// Package: LibraryMenu_Monster_DetailTabMenu

#include "Basic.hpp"

#include "LibraryMenu_Monster_DetailTabMenu_classes.hpp"
#include "LibraryMenu_Monster_DetailTabMenu_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.OnAreaListSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             EnemyId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Monster_DetailTabMenu_C::OnAreaListSelect__DelegateSignature(int32 Param_Index, class FName EnemyId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_DetailTabMenu_C", "OnAreaListSelect__DelegateSignature");

	Params::LibraryMenu_Monster_DetailTabMenu_C_OnAreaListSelect__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;
	Parms.EnemyId = EnemyId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.OnAreaListVisibleChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_Monster_DetailTabMenu_C::OnAreaListVisibleChange__DelegateSignature(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_DetailTabMenu_C", "OnAreaListVisibleChange__DelegateSignature");

	Params::LibraryMenu_Monster_DetailTabMenu_C_OnAreaListVisibleChange__DelegateSignature Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.ExecuteUbergraph_LibraryMenu_Monster_DetailTabMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Monster_DetailTabMenu_C::ExecuteUbergraph_LibraryMenu_Monster_DetailTabMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_DetailTabMenu_C", "ExecuteUbergraph_LibraryMenu_Monster_DetailTabMenu");

	Params::LibraryMenu_Monster_DetailTabMenu_C_ExecuteUbergraph_LibraryMenu_Monster_DetailTabMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Monster_DetailTabMenu_C::BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_DetailTabMenu_C", "BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULibraryMenu_Monster_DetailTabMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_DetailTabMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Monster_DetailTabMenu_C::BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_DetailTabMenu_C", "BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Monster_DetailTabMenu_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_DetailTabMenu_C", "OnAnimationFinished");

	Params::LibraryMenu_Monster_DetailTabMenu_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.OnAreaItemSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Monster_DetailTabMenu_C::OnAreaItemSelect(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_DetailTabMenu_C", "OnAreaItemSelect");

	Params::LibraryMenu_Monster_DetailTabMenu_C_OnAreaItemSelect Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.BndEvt__LibraryMenu_Monster_DetailTabMenu_AreaSelectCloseFullscreen_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Monster_DetailTabMenu_C::BndEvt__LibraryMenu_Monster_DetailTabMenu_AreaSelectCloseFullscreen_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_DetailTabMenu_C", "BndEvt__LibraryMenu_Monster_DetailTabMenu_AreaSelectCloseFullscreen_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Monster_DetailTabMenu_C::BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_DetailTabMenu_C", "BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_3_OnHandledLostFocus__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Monster_DetailTabMenu_C::BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_3_OnHandledLostFocus__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_DetailTabMenu_C", "BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_3_OnHandledLostFocus__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.ButtonTextColorChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OnCursor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_Monster_DetailTabMenu_C::ButtonTextColorChange(bool OnCursor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_DetailTabMenu_C", "ButtonTextColorChange");

	Params::LibraryMenu_Monster_DetailTabMenu_C_ButtonTextColorChange Parms{};

	Parms.OnCursor = OnCursor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.SetEnemyData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBLibraryEnemyData              EnemyData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void ULibraryMenu_Monster_DetailTabMenu_C::SetEnemyData(const struct FSBLibraryEnemyData& EnemyData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_DetailTabMenu_C", "SetEnemyData");

	Params::LibraryMenu_Monster_DetailTabMenu_C_SetEnemyData Parms{};

	Parms.EnemyData = std::move(EnemyData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.ChangeEnemyViewData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ChangeEnemyId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Monster_DetailTabMenu_C::ChangeEnemyViewData(class FName ChangeEnemyId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_DetailTabMenu_C", "ChangeEnemyViewData");

	Params::LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyViewData Parms{};

	Parms.ChangeEnemyId = ChangeEnemyId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.Initialize Drop Item List
// (Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Monster_DetailTabMenu_C::Initialize_Drop_Item_List()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_DetailTabMenu_C", "Initialize Drop Item List");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.Update Drop Item Widget Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Num                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Monster_DetailTabMenu_C::Update_Drop_Item_Widget_Visibility(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_DetailTabMenu_C", "Update Drop Item Widget Visibility");

	Params::LibraryMenu_Monster_DetailTabMenu_C_Update_Drop_Item_Widget_Visibility Parms{};

	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.GetDropItemWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULibraryMenu_Monster_DropItem_C*  Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Monster_DetailTabMenu_C::GetDropItemWidget(int32 Param_Index, class ULibraryMenu_Monster_DropItem_C** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_DetailTabMenu_C", "GetDropItemWidget");

	Params::LibraryMenu_Monster_DetailTabMenu_C_GetDropItemWidget Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}


// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.GetEnemyPopAreaData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   AreaIds                                                (Parm, OutParm)

void ULibraryMenu_Monster_DetailTabMenu_C::GetEnemyPopAreaData(TArray<class FString>* AreaIds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_DetailTabMenu_C", "GetEnemyPopAreaData");

	Params::LibraryMenu_Monster_DetailTabMenu_C_GetEnemyPopAreaData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AreaIds != nullptr)
		*AreaIds = std::move(Parms.AreaIds);
}


// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.ChangeEnemyData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AreaIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Monster_DetailTabMenu_C::ChangeEnemyData(int32 Type, int32 Param_Index, int32 AreaIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_DetailTabMenu_C", "ChangeEnemyData");

	Params::LibraryMenu_Monster_DetailTabMenu_C_ChangeEnemyData Parms{};

	Parms.Type = Type;
	Parms.Param_Index = Param_Index;
	Parms.AreaIndex = AreaIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.OpenAreaList
// (Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Monster_DetailTabMenu_C::OpenAreaList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_DetailTabMenu_C", "OpenAreaList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.CloseAreaList
// (Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Monster_DetailTabMenu_C::CloseAreaList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_DetailTabMenu_C", "CloseAreaList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.MakeAreaList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Monster_DetailTabMenu_C::MakeAreaList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_DetailTabMenu_C", "MakeAreaList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.GetAreaListWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULibraryMenu_MonsterAreaListItem_C*OutWidget                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Monster_DetailTabMenu_C::GetAreaListWidget(int32 Param_Index, class ULibraryMenu_MonsterAreaListItem_C** OutWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_DetailTabMenu_C", "GetAreaListWidget");

	Params::LibraryMenu_Monster_DetailTabMenu_C_GetAreaListWidget Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	if (OutWidget != nullptr)
		*OutWidget = Parms.OutWidget;
}


// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.SetActiveArea
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Monster_DetailTabMenu_C::SetActiveArea(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_DetailTabMenu_C", "SetActiveArea");

	Params::LibraryMenu_Monster_DetailTabMenu_C_SetActiveArea Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.UpdateDetailOpenSetting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Monster_DetailTabMenu_C::UpdateDetailOpenSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_DetailTabMenu_C", "UpdateDetailOpenSetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C.GetDetailOpenSetting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CheckType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Monster_DetailTabMenu_C::GetDetailOpenSetting(class FName CheckType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_DetailTabMenu_C", "GetDetailOpenSetting");

	Params::LibraryMenu_Monster_DetailTabMenu_C_GetDetailOpenSetting Parms{};

	Parms.CheckType = CheckType;

	UObject::ProcessEvent(Func, &Parms);
}

}

