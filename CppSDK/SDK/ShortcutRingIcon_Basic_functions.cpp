#pragma once

 

// Package: ShortcutRingIcon_Basic

#include "Basic.hpp"

#include "ShortcutRingIcon_Basic_classes.hpp"
#include "ShortcutRingIcon_Basic_parameters.hpp"


namespace SDK
{

// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.ExecuteUbergraph_ShortcutRingIcon_Basic
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRingIcon_Basic_C::ExecuteUbergraph_ShortcutRingIcon_Basic(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Basic_C", "ExecuteUbergraph_ShortcutRingIcon_Basic");

	Params::ShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UShortcutRingIcon_Basic_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Basic_C", "OnMouseLeave");

	Params::ShortcutRingIcon_Basic_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UShortcutRingIcon_Basic_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Basic_C", "OnMouseEnter");

	Params::ShortcutRingIcon_Basic_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.UnbindOnSaveItemStorage
// (BlueprintCallable, BlueprintEvent)

void UShortcutRingIcon_Basic_C::UnbindOnSaveItemStorage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Basic_C", "UnbindOnSaveItemStorage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.BindOnSaveItemStorage
// (BlueprintCallable, BlueprintEvent)

void UShortcutRingIcon_Basic_C::BindOnSaveItemStorage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Basic_C", "BindOnSaveItemStorage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.ItemUseAfter
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FOwnItemInfo>             InDirtyItems                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UShortcutRingIcon_Basic_C::ItemUseAfter(const int32 InRetCode, const TArray<struct FOwnItemInfo>& InDirtyItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Basic_C", "ItemUseAfter");

	Params::ShortcutRingIcon_Basic_C_ItemUseAfter Parms{};

	Parms.InRetCode = InRetCode;
	Parms.InDirtyItems = std::move(InDirtyItems);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.PlayAnimPressed
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UShortcutRingIcon_Basic_C::PlayAnimPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Basic_C", "PlayAnimPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnClearBP
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UShortcutRingIcon_Basic_C::OnClearBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Basic_C", "OnClearBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetOwnItem
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRingIcon_Basic_C::OnSetOwnItem(int32 InItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Basic_C", "OnSetOwnItem");

	Params::ShortcutRingIcon_Basic_C_OnSetOwnItem Parms{};

	Parms.InItemIndex = InItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetEmotion
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InEmotionId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UShortcutRingIcon_Basic_C::OnSetEmotion(const class FString& InEmotionId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Basic_C", "OnSetEmotion");

	Params::ShortcutRingIcon_Basic_C_OnSetEmotion Parms{};

	Parms.InEmotionId = std::move(InEmotionId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetStamp
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InStampId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UShortcutRingIcon_Basic_C::OnSetStamp(const class FString& InStampId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Basic_C", "OnSetStamp");

	Params::ShortcutRingIcon_Basic_C_OnSetStamp Parms{};

	Parms.InStampId = std::move(InStampId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetSupply
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InItemAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRingIcon_Basic_C::OnSetSupply(int32 InItemIndex, int32 InItemAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Basic_C", "OnSetSupply");

	Params::ShortcutRingIcon_Basic_C_OnSetSupply Parms{};

	Parms.InItemIndex = InItemIndex;
	Parms.InItemAmount = InItemAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnExecuteOwnItem
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBItemUseStatus                        InItemUseStatus                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRingIcon_Basic_C::OnExecuteOwnItem(const class FString& InUniqueId, int32 InItemIndex, ESBItemUseStatus InItemUseStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Basic_C", "OnExecuteOwnItem");

	Params::ShortcutRingIcon_Basic_C_OnExecuteOwnItem Parms{};

	Parms.InUniqueId = std::move(InUniqueId);
	Parms.InItemIndex = InItemIndex;
	Parms.InItemUseStatus = InItemUseStatus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnExecuteSupply
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBItemUseStatus                        InItemUseStatus                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRingIcon_Basic_C::OnExecuteSupply(int32 InItemIndex, ESBItemUseStatus InItemUseStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Basic_C", "OnExecuteSupply");

	Params::ShortcutRingIcon_Basic_C_OnExecuteSupply Parms{};

	Parms.InItemIndex = InItemIndex;
	Parms.InItemUseStatus = InItemUseStatus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetGrayOut
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InGrayOut                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShortcutRingIcon_Basic_C::OnSetGrayOut(bool InGrayOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Basic_C", "OnSetGrayOut");

	Params::ShortcutRingIcon_Basic_C_OnSetGrayOut Parms{};

	Parms.InGrayOut = InGrayOut;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetCoolTime
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsShow                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShortcutRingIcon_Basic_C::OnSetCoolTime(bool InIsShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Basic_C", "OnSetCoolTime");

	Params::ShortcutRingIcon_Basic_C_OnSetCoolTime Parms{};

	Parms.InIsShow = InIsShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetEnableToolTip
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShortcutRingIcon_Basic_C::OnSetEnableToolTip(bool InEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Basic_C", "OnSetEnableToolTip");

	Params::ShortcutRingIcon_Basic_C_OnSetEnableToolTip Parms{};

	Parms.InEnable = InEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetVisibleShortcutIcon
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShortcutRingIcon_Basic_C::OnSetVisibleShortcutIcon(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Basic_C", "OnSetVisibleShortcutIcon");

	Params::ShortcutRingIcon_Basic_C_OnSetVisibleShortcutIcon Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnExecuteError
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UShortcutRingIcon_Basic_C::OnExecuteError()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Basic_C", "OnExecuteError");

	UObject::ProcessEvent(Func, nullptr);
}

}

