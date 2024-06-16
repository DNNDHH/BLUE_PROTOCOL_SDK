#pragma once

 

// Package: BP_SBUIBlueprintFunctionLibrary

#include "Basic.hpp"

#include "BP_SBUIBlueprintFunctionLibrary_classes.hpp"
#include "BP_SBUIBlueprintFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.CanInterruptNotification
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IgnoreFindnemy                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SBUIBlueprintFunctionLibrary_C::CanInterruptNotification(bool IgnoreFindnemy, class UObject* __WorldContext, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_SBUIBlueprintFunctionLibrary_C", "CanInterruptNotification");

	Params::BP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification Parms{};

	Parms.IgnoreFindnemy = IgnoreFindnemy;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.GetParentWidget
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          Children                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Parent                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBUIBlueprintFunctionLibrary_C::GetParentWidget(class UObject* Children, class UObject* __WorldContext, class UUserWidget** Parent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_SBUIBlueprintFunctionLibrary_C", "GetParentWidget");

	Params::BP_SBUIBlueprintFunctionLibrary_C_GetParentWidget Parms{};

	Parms.Children = Children;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Parent != nullptr)
		*Parent = Parms.Parent;
}


// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.CastOuterAsWidget
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      OwnerWidget                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          OuteroObject                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBUIBlueprintFunctionLibrary_C::CastOuterAsWidget(class UObject* Widget, class UObject* __WorldContext, class UUserWidget** OwnerWidget, bool* Result, class UObject** OuteroObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_SBUIBlueprintFunctionLibrary_C", "CastOuterAsWidget");

	Params::BP_SBUIBlueprintFunctionLibrary_C_CastOuterAsWidget Parms{};

	Parms.Widget = Widget;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OwnerWidget != nullptr)
		*OwnerWidget = Parms.OwnerWidget;

	if (Result != nullptr)
		*Result = Parms.Result;

	if (OuteroObject != nullptr)
		*OuteroObject = Parms.OuteroObject;
}


// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.ChangeLevelSyncTextColor
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                       InTextWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InItemUniqueId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    InStoregeCheck                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsLevelSync                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SBUIBlueprintFunctionLibrary_C::ChangeLevelSyncTextColor(class UTextBlock* InTextWidget, const class FString& InItemUniqueId, bool InStoregeCheck, class UObject* __WorldContext, bool* bIsLevelSync)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_SBUIBlueprintFunctionLibrary_C", "ChangeLevelSyncTextColor");

	Params::BP_SBUIBlueprintFunctionLibrary_C_ChangeLevelSyncTextColor Parms{};

	Parms.InTextWidget = InTextWidget;
	Parms.InItemUniqueId = std::move(InItemUniqueId);
	Parms.InStoregeCheck = InStoregeCheck;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsLevelSync != nullptr)
		*bIsLevelSync = Parms.bIsLevelSync;
}


// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.IsRegisterWishlistLimit
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          WorldContextObject                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsRegisterWishList                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SBUIBlueprintFunctionLibrary_C::IsRegisterWishlistLimit(class UObject* WorldContextObject, class UObject* __WorldContext, bool* bIsRegisterWishList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_SBUIBlueprintFunctionLibrary_C", "IsRegisterWishlistLimit");

	Params::BP_SBUIBlueprintFunctionLibrary_C_IsRegisterWishlistLimit Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsRegisterWishList != nullptr)
		*bIsRegisterWishList = Parms.bIsRegisterWishList;
}


// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.ChangeImagineLevelSync
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InItemUniqueId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UTextBlock*                       InTextWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InStorageCheck                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InUseClassTypeForLevelSync                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBClassType                            InClassTypeForLevelSync                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ForceLevelSyncOff                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsLevelSync                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SBUIBlueprintFunctionLibrary_C::ChangeImagineLevelSync(const class FString& InItemUniqueId, class UTextBlock* InTextWidget, bool InStorageCheck, bool InUseClassTypeForLevelSync, ESBClassType InClassTypeForLevelSync, bool ForceLevelSyncOff, class UObject* __WorldContext, bool* bIsLevelSync)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_SBUIBlueprintFunctionLibrary_C", "ChangeImagineLevelSync");

	Params::BP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync Parms{};

	Parms.InItemUniqueId = std::move(InItemUniqueId);
	Parms.InTextWidget = InTextWidget;
	Parms.InStorageCheck = InStorageCheck;
	Parms.InUseClassTypeForLevelSync = InUseClassTypeForLevelSync;
	Parms.InClassTypeForLevelSync = InClassTypeForLevelSync;
	Parms.ForceLevelSyncOff = ForceLevelSyncOff;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsLevelSync != nullptr)
		*bIsLevelSync = Parms.bIsLevelSync;
}


// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.ChangeWeaponLevelSync
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InItemUniqueId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UTextBlock*                       InTextWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InStoregeCheck                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsLevelSync                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SBUIBlueprintFunctionLibrary_C::ChangeWeaponLevelSync(const class FString& InItemUniqueId, class UTextBlock* InTextWidget, bool InStoregeCheck, class UObject* __WorldContext, bool* bIsLevelSync)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_SBUIBlueprintFunctionLibrary_C", "ChangeWeaponLevelSync");

	Params::BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSync Parms{};

	Parms.InItemUniqueId = std::move(InItemUniqueId);
	Parms.InTextWidget = InTextWidget;
	Parms.InStoregeCheck = InStoregeCheck;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsLevelSync != nullptr)
		*bIsLevelSync = Parms.bIsLevelSync;
}


// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.ChangeWeaponLevelSyncByWeaponId
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InWeaponID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       InTextWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsLevelSync                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SBUIBlueprintFunctionLibrary_C::ChangeWeaponLevelSyncByWeaponId(int32 InWeaponID, class UTextBlock* InTextWidget, class UObject* __WorldContext, bool* bIsLevelSync)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_SBUIBlueprintFunctionLibrary_C", "ChangeWeaponLevelSyncByWeaponId");

	Params::BP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSyncByWeaponId Parms{};

	Parms.InWeaponID = InWeaponID;
	Parms.InTextWidget = InTextWidget;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsLevelSync != nullptr)
		*bIsLevelSync = Parms.bIsLevelSync;
}


// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.SetLevelSyncColor
// (Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Condition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTextBlock*                       InputPin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsLevelSync                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SBUIBlueprintFunctionLibrary_C::SetLevelSyncColor(bool Condition, class UTextBlock* InputPin, class UObject* __WorldContext, bool* bIsLevelSync)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_SBUIBlueprintFunctionLibrary_C", "SetLevelSyncColor");

	Params::BP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor Parms{};

	Parms.Condition = Condition;
	Parms.InputPin = InputPin;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsLevelSync != nullptr)
		*bIsLevelSync = Parms.bIsLevelSync;
}


// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.SetFullscreen
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanelSlot*                 CanvasPanelSlot                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBUIBlueprintFunctionLibrary_C::SetFullscreen(class UCanvasPanelSlot* CanvasPanelSlot, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_SBUIBlueprintFunctionLibrary_C", "SetFullscreen");

	Params::BP_SBUIBlueprintFunctionLibrary_C_SetFullscreen Parms{};

	Parms.CanvasPanelSlot = CanvasPanelSlot;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.GetImagineLevelSyncLevel
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           InImagineUniqueId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   InImagineLevel                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutImagineLevel                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBUIBlueprintFunctionLibrary_C::GetImagineLevelSyncLevel(const class FString& InImagineUniqueId, int32 InImagineLevel, class UObject* __WorldContext, int32* OutImagineLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_SBUIBlueprintFunctionLibrary_C", "GetImagineLevelSyncLevel");

	Params::BP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel Parms{};

	Parms.InImagineUniqueId = std::move(InImagineUniqueId);
	Parms.InImagineLevel = InImagineLevel;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutImagineLevel != nullptr)
		*OutImagineLevel = Parms.OutImagineLevel;
}


// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.SetVisibilityComparison
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        InVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBUIBlueprintFunctionLibrary_C::SetVisibilityComparison(class UWidget* Target, ESlateVisibility InVisibility, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_SBUIBlueprintFunctionLibrary_C", "SetVisibilityComparison");

	Params::BP_SBUIBlueprintFunctionLibrary_C_SetVisibilityComparison Parms{};

	Parms.Target = Target;
	Parms.InVisibility = InVisibility;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.GetStackBEnableType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          InWorldContextObject                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBStackBEnableType                     OutStackBEnableType                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBUIBlueprintFunctionLibrary_C::GetStackBEnableType(class UObject* InWorldContextObject, class UObject* __WorldContext, ESBStackBEnableType* OutStackBEnableType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_SBUIBlueprintFunctionLibrary_C", "GetStackBEnableType");

	Params::BP_SBUIBlueprintFunctionLibrary_C_GetStackBEnableType Parms{};

	Parms.InWorldContextObject = InWorldContextObject;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutStackBEnableType != nullptr)
		*OutStackBEnableType = Parms.OutStackBEnableType;
}


// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.SetStackBEnableColor
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBStackBEnableType                     InStackBEnableType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       InTextWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsStackBEnableFull                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SBUIBlueprintFunctionLibrary_C::SetStackBEnableColor(ESBStackBEnableType InStackBEnableType, class UTextBlock* InTextWidget, class UObject* __WorldContext, bool* OutIsStackBEnableFull)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_SBUIBlueprintFunctionLibrary_C", "SetStackBEnableColor");

	Params::BP_SBUIBlueprintFunctionLibrary_C_SetStackBEnableColor Parms{};

	Parms.InStackBEnableType = InStackBEnableType;
	Parms.InTextWidget = InTextWidget;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutIsStackBEnableFull != nullptr)
		*OutIsStackBEnableFull = Parms.OutIsStackBEnableFull;
}


// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.IsDhcBattleMap
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_IsDhcBattleMap                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SBUIBlueprintFunctionLibrary_C::IsDhcBattleMap(class UObject* __WorldContext, bool* Param_IsDhcBattleMap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_SBUIBlueprintFunctionLibrary_C", "IsDhcBattleMap");

	Params::BP_SBUIBlueprintFunctionLibrary_C_IsDhcBattleMap Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Param_IsDhcBattleMap != nullptr)
		*Param_IsDhcBattleMap = Parms.Param_IsDhcBattleMap;
}


// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.SetTextComparison
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                       Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBUIBlueprintFunctionLibrary_C::SetTextComparison(class UTextBlock* Target, const class FText& InText, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_SBUIBlueprintFunctionLibrary_C", "SetTextComparison");

	Params::BP_SBUIBlueprintFunctionLibrary_C_SetTextComparison Parms{};

	Parms.Target = Target;
	Parms.InText = std::move(InText);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.GetRewardString
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     InRewardId                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutString                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBP_SBUIBlueprintFunctionLibrary_C::GetRewardString(TArray<class FName>& InRewardId, class UObject* __WorldContext, class FString* OutString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_SBUIBlueprintFunctionLibrary_C", "GetRewardString");

	Params::BP_SBUIBlueprintFunctionLibrary_C_GetRewardString Parms{};

	Parms.InRewardId = std::move(InRewardId);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	InRewardId = std::move(Parms.InRewardId);

	if (OutString != nullptr)
		*OutString = std::move(Parms.OutString);
}


// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.GetAdventureboardGoalRewardString
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InBoardId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutRewadString                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBP_SBUIBlueprintFunctionLibrary_C::GetAdventureboardGoalRewardString(int32 InBoardId, class UObject* __WorldContext, class FString* OutRewadString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_SBUIBlueprintFunctionLibrary_C", "GetAdventureboardGoalRewardString");

	Params::BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString Parms{};

	Parms.InBoardId = InBoardId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutRewadString != nullptr)
		*OutRewadString = std::move(Parms.OutRewadString);
}


// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.GetAdventureboardCompleteRewardString
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InBoardId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutRewardString                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBP_SBUIBlueprintFunctionLibrary_C::GetAdventureboardCompleteRewardString(int32 InBoardId, class UObject* __WorldContext, class FString* OutRewardString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_SBUIBlueprintFunctionLibrary_C", "GetAdventureboardCompleteRewardString");

	Params::BP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardCompleteRewardString Parms{};

	Parms.InBoardId = InBoardId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutRewardString != nullptr)
		*OutRewardString = std::move(Parms.OutRewardString);
}


// Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.IsUseSkyStore
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SBUIBlueprintFunctionLibrary_C::IsUseSkyStore(class UObject* __WorldContext, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_SBUIBlueprintFunctionLibrary_C", "IsUseSkyStore");

	Params::BP_SBUIBlueprintFunctionLibrary_C_IsUseSkyStore Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}

}

