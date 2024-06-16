#pragma once

 

// Package: ShortcutRing_Ring

#include "Basic.hpp"

#include "ShortcutRing_Ring_classes.hpp"
#include "ShortcutRing_Ring_parameters.hpp"


namespace SDK
{

// Function ShortcutRing_Ring.ShortcutRing_Ring_C.OnInOutFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   AnimationCurrentTime                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRing_Ring_C::OnInOutFinished__DelegateSignature(float AnimationCurrentTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_Ring_C", "OnInOutFinished__DelegateSignature");

	Params::ShortcutRing_Ring_C_OnInOutFinished__DelegateSignature Parms{};

	Parms.AnimationCurrentTime = AnimationCurrentTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRing_Ring.ShortcutRing_Ring_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRing_Ring_C::OnClick__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_Ring_C", "OnClick__DelegateSignature");

	Params::ShortcutRing_Ring_C_OnClick__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRing_Ring.ShortcutRing_Ring_C.OnClickRight__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRing_Ring_C::OnClickRight__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_Ring_C", "OnClickRight__DelegateSignature");

	Params::ShortcutRing_Ring_C_OnClickRight__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRing_Ring.ShortcutRing_Ring_C.ExecuteUbergraph_ShortcutRing_Ring
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRing_Ring_C::ExecuteUbergraph_ShortcutRing_Ring(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_Ring_C", "ExecuteUbergraph_ShortcutRing_Ring");

	Params::ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRing_Ring.ShortcutRing_Ring_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShortcutRing_Ring_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_Ring_C", "PreConstruct");

	Params::ShortcutRing_Ring_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRing_Ring.ShortcutRing_Ring_C.WidgetAnimationEvt_InOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UShortcutRing_Ring_C::WidgetAnimationEvt_InOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_Ring_C", "WidgetAnimationEvt_InOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing_Ring.ShortcutRing_Ring_C.BndEvt__ShortcutringIcon_7_K2Node_ComponentBoundEvent_15_OnClickRight__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UShortcutringIcon_C*              Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRing_Ring_C::BndEvt__ShortcutringIcon_7_K2Node_ComponentBoundEvent_15_OnClickRight__DelegateSignature(class UShortcutringIcon_C* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_Ring_C", "BndEvt__ShortcutringIcon_7_K2Node_ComponentBoundEvent_15_OnClickRight__DelegateSignature");

	Params::ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_7_K2Node_ComponentBoundEvent_15_OnClickRight__DelegateSignature Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRing_Ring.ShortcutRing_Ring_C.BndEvt__ShortcutringIcon_6_K2Node_ComponentBoundEvent_14_OnClickRight__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UShortcutringIcon_C*              Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRing_Ring_C::BndEvt__ShortcutringIcon_6_K2Node_ComponentBoundEvent_14_OnClickRight__DelegateSignature(class UShortcutringIcon_C* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_Ring_C", "BndEvt__ShortcutringIcon_6_K2Node_ComponentBoundEvent_14_OnClickRight__DelegateSignature");

	Params::ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_6_K2Node_ComponentBoundEvent_14_OnClickRight__DelegateSignature Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRing_Ring.ShortcutRing_Ring_C.BndEvt__ShortcutringIcon_5_K2Node_ComponentBoundEvent_13_OnClickRight__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UShortcutringIcon_C*              Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRing_Ring_C::BndEvt__ShortcutringIcon_5_K2Node_ComponentBoundEvent_13_OnClickRight__DelegateSignature(class UShortcutringIcon_C* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_Ring_C", "BndEvt__ShortcutringIcon_5_K2Node_ComponentBoundEvent_13_OnClickRight__DelegateSignature");

	Params::ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_5_K2Node_ComponentBoundEvent_13_OnClickRight__DelegateSignature Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRing_Ring.ShortcutRing_Ring_C.BndEvt__ShortcutringIcon_4_K2Node_ComponentBoundEvent_12_OnClickRight__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UShortcutringIcon_C*              Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRing_Ring_C::BndEvt__ShortcutringIcon_4_K2Node_ComponentBoundEvent_12_OnClickRight__DelegateSignature(class UShortcutringIcon_C* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_Ring_C", "BndEvt__ShortcutringIcon_4_K2Node_ComponentBoundEvent_12_OnClickRight__DelegateSignature");

	Params::ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_4_K2Node_ComponentBoundEvent_12_OnClickRight__DelegateSignature Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRing_Ring.ShortcutRing_Ring_C.BndEvt__ShortcutringIcon_3_K2Node_ComponentBoundEvent_11_OnClickRight__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UShortcutringIcon_C*              Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRing_Ring_C::BndEvt__ShortcutringIcon_3_K2Node_ComponentBoundEvent_11_OnClickRight__DelegateSignature(class UShortcutringIcon_C* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_Ring_C", "BndEvt__ShortcutringIcon_3_K2Node_ComponentBoundEvent_11_OnClickRight__DelegateSignature");

	Params::ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_3_K2Node_ComponentBoundEvent_11_OnClickRight__DelegateSignature Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRing_Ring.ShortcutRing_Ring_C.BndEvt__ShortcutringIcon_2_K2Node_ComponentBoundEvent_10_OnClickRight__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UShortcutringIcon_C*              Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRing_Ring_C::BndEvt__ShortcutringIcon_2_K2Node_ComponentBoundEvent_10_OnClickRight__DelegateSignature(class UShortcutringIcon_C* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_Ring_C", "BndEvt__ShortcutringIcon_2_K2Node_ComponentBoundEvent_10_OnClickRight__DelegateSignature");

	Params::ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_2_K2Node_ComponentBoundEvent_10_OnClickRight__DelegateSignature Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRing_Ring.ShortcutRing_Ring_C.BndEvt__ShortcutringIcon_1_K2Node_ComponentBoundEvent_9_OnClickRight__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UShortcutringIcon_C*              Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRing_Ring_C::BndEvt__ShortcutringIcon_1_K2Node_ComponentBoundEvent_9_OnClickRight__DelegateSignature(class UShortcutringIcon_C* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_Ring_C", "BndEvt__ShortcutringIcon_1_K2Node_ComponentBoundEvent_9_OnClickRight__DelegateSignature");

	Params::ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_1_K2Node_ComponentBoundEvent_9_OnClickRight__DelegateSignature Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRing_Ring.ShortcutRing_Ring_C.BndEvt__ShortcutringIcon_K2Node_ComponentBoundEvent_8_OnClickRight__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UShortcutringIcon_C*              Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRing_Ring_C::BndEvt__ShortcutringIcon_K2Node_ComponentBoundEvent_8_OnClickRight__DelegateSignature(class UShortcutringIcon_C* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_Ring_C", "BndEvt__ShortcutringIcon_K2Node_ComponentBoundEvent_8_OnClickRight__DelegateSignature");

	Params::ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_K2Node_ComponentBoundEvent_8_OnClickRight__DelegateSignature Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRing_Ring.ShortcutRing_Ring_C.BndEvt__ShortcutringIcon_7_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UShortcutringIcon_C*              Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRing_Ring_C::BndEvt__ShortcutringIcon_7_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature(class UShortcutringIcon_C* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_Ring_C", "BndEvt__ShortcutringIcon_7_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature");

	Params::ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_7_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRing_Ring.ShortcutRing_Ring_C.BndEvt__ShortcutringIcon_6_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UShortcutringIcon_C*              Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRing_Ring_C::BndEvt__ShortcutringIcon_6_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature(class UShortcutringIcon_C* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_Ring_C", "BndEvt__ShortcutringIcon_6_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature");

	Params::ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_6_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRing_Ring.ShortcutRing_Ring_C.BndEvt__ShortcutringIcon_5_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UShortcutringIcon_C*              Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRing_Ring_C::BndEvt__ShortcutringIcon_5_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature(class UShortcutringIcon_C* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_Ring_C", "BndEvt__ShortcutringIcon_5_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature");

	Params::ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_5_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRing_Ring.ShortcutRing_Ring_C.BndEvt__ShortcutringIcon_4_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UShortcutringIcon_C*              Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRing_Ring_C::BndEvt__ShortcutringIcon_4_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature(class UShortcutringIcon_C* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_Ring_C", "BndEvt__ShortcutringIcon_4_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature");

	Params::ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_4_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRing_Ring.ShortcutRing_Ring_C.BndEvt__ShortcutringIcon_3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UShortcutringIcon_C*              Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRing_Ring_C::BndEvt__ShortcutringIcon_3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature(class UShortcutringIcon_C* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_Ring_C", "BndEvt__ShortcutringIcon_3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature");

	Params::ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRing_Ring.ShortcutRing_Ring_C.BndEvt__ShortcutringIcon_2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UShortcutringIcon_C*              Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRing_Ring_C::BndEvt__ShortcutringIcon_2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature(class UShortcutringIcon_C* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_Ring_C", "BndEvt__ShortcutringIcon_2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature");

	Params::ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRing_Ring.ShortcutRing_Ring_C.BndEvt__ShortcutringIcon_1_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UShortcutringIcon_C*              Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRing_Ring_C::BndEvt__ShortcutringIcon_1_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(class UShortcutringIcon_C* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_Ring_C", "BndEvt__ShortcutringIcon_1_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");

	Params::ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_1_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRing_Ring.ShortcutRing_Ring_C.BndEvt__ShortcutringIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UShortcutringIcon_C*              Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRing_Ring_C::BndEvt__ShortcutringIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(class UShortcutringIcon_C* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_Ring_C", "BndEvt__ShortcutringIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");

	Params::ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRing_Ring.ShortcutRing_Ring_C.PlayAnimIn
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UShortcutRing_Ring_C::PlayAnimIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_Ring_C", "PlayAnimIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing_Ring.ShortcutRing_Ring_C.PlayAnimOut
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UShortcutRing_Ring_C::PlayAnimOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_Ring_C", "PlayAnimOut");

	UObject::ProcessEvent(Func, nullptr);
}

}

