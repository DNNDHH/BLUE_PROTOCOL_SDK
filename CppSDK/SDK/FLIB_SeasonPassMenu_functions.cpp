#pragma once

 

// Package: FLIB_SeasonPassMenu

#include "Basic.hpp"

#include "FLIB_SeasonPassMenu_classes.hpp"
#include "FLIB_SeasonPassMenu_parameters.hpp"


namespace SDK
{

// Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.GetSeasonPassComponentPure
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USBPlayerSeasonPassComponent*     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBPlayerSeasonPassComponent* UFLIB_SeasonPassMenu_C::GetSeasonPassComponentPure(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_SeasonPassMenu_C", "GetSeasonPassComponentPure");

	Params::FLIB_SeasonPassMenu_C_GetSeasonPassComponentPure Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.GetSeasonPassComponent
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USBPlayerSeasonPassComponent*     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBPlayerSeasonPassComponent* UFLIB_SeasonPassMenu_C::GetSeasonPassComponent(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_SeasonPassMenu_C", "GetSeasonPassComponent");

	Params::FLIB_SeasonPassMenu_C_GetSeasonPassComponent Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.IsNearlyStartCurrentSeason
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFLIB_SeasonPassMenu_C::IsNearlyStartCurrentSeason(class UObject* __WorldContext, bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_SeasonPassMenu_C", "IsNearlyStartCurrentSeason");

	Params::FLIB_SeasonPassMenu_C_IsNearlyStartCurrentSeason Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}


// Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.IsNearlyEndCurrentSeasonProgress
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFLIB_SeasonPassMenu_C::IsNearlyEndCurrentSeasonProgress(class UObject* __WorldContext, bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_SeasonPassMenu_C", "IsNearlyEndCurrentSeasonProgress");

	Params::FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeasonProgress Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}


// Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.IsNearlyEndCurrentSeason
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFLIB_SeasonPassMenu_C::IsNearlyEndCurrentSeason(class UObject* __WorldContext, bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_SeasonPassMenu_C", "IsNearlyEndCurrentSeason");

	Params::FLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeason Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}


// Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.IsEnableSeasonPassPurchaseMenu
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFLIB_SeasonPassMenu_C::IsEnableSeasonPassPurchaseMenu(class UObject* __WorldContext, bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_SeasonPassMenu_C", "IsEnableSeasonPassPurchaseMenu");

	Params::FLIB_SeasonPassMenu_C_IsEnableSeasonPassPurchaseMenu Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}


// Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.IsEnableSeasonPassRankPurchaseMenu
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFLIB_SeasonPassMenu_C::IsEnableSeasonPassRankPurchaseMenu(class UObject* __WorldContext, bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_SeasonPassMenu_C", "IsEnableSeasonPassRankPurchaseMenu");

	Params::FLIB_SeasonPassMenu_C_IsEnableSeasonPassRankPurchaseMenu Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}


// Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.IsUnreadedSeasonPassFlag
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ENewMarkContentType                     InCategory                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFLIB_SeasonPassMenu_C::IsUnreadedSeasonPassFlag(ENewMarkContentType InCategory, class UObject* __WorldContext, bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_SeasonPassMenu_C", "IsUnreadedSeasonPassFlag");

	Params::FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag Parms{};

	Parms.InCategory = InCategory;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}


// Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.IsUnreadedSeasonPassFlagSub
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ENewMarkContentType                     InCategory                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFLIB_SeasonPassMenu_C::IsUnreadedSeasonPassFlagSub(ENewMarkContentType InCategory, class UObject* __WorldContext, bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_SeasonPassMenu_C", "IsUnreadedSeasonPassFlagSub");

	Params::FLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlagSub Parms{};

	Parms.InCategory = InCategory;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}


// Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.GetSeasonPassTiming
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Flag                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFLIB_SeasonPassMenu_C::GetSeasonPassTiming(class UObject* __WorldContext, bool* bValid, int32* Flag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_SeasonPassMenu_C", "GetSeasonPassTiming");

	Params::FLIB_SeasonPassMenu_C_GetSeasonPassTiming Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bValid != nullptr)
		*bValid = Parms.bValid;

	if (Flag != nullptr)
		*Flag = Parms.Flag;
}


// Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.RegistReadedSeasonPassFlag
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENewMarkContentType                     NewFlag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ENewMarkContentType                     EndFlag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ENewMarkContentType                     ReceiveEndFlag                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFLIB_SeasonPassMenu_C::RegistReadedSeasonPassFlag(ENewMarkContentType NewFlag, ENewMarkContentType EndFlag, ENewMarkContentType ReceiveEndFlag, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_SeasonPassMenu_C", "RegistReadedSeasonPassFlag");

	Params::FLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag Parms{};

	Parms.NewFlag = NewFlag;
	Parms.EndFlag = EndFlag;
	Parms.ReceiveEndFlag = ReceiveEndFlag;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.SetSeasonPassQuestListItem
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBSeasonPassQuestItemData       SBSeasonPassQuestItemData                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ESBSeasonPassQuestCycleType             Cycle                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       QuestName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       Progress                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          Cleared                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQuestRewardIcon_C*>       ItemIconArray                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UWidgetSwitcher*                  Switcher_RewardBtn                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          Button_Clear                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          Button_Clear_Arrow                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       RankPoint                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_SeasonPassQuestRibbon_C*     PassRibbon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          Notsubscribed                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsGetRewardItem                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFLIB_SeasonPassMenu_C::SetSeasonPassQuestListItem(const struct FSBSeasonPassQuestItemData& SBSeasonPassQuestItemData, const ESBSeasonPassQuestCycleType Cycle, class UTextBlock* QuestName, class UTextBlock* Progress, class UWidget* Cleared, TArray<class UQuestRewardIcon_C*>& ItemIconArray, class UWidgetSwitcher* Switcher_RewardBtn, class UWidget* Button_Clear, class UWidget* Button_Clear_Arrow, class UTextBlock* RankPoint, class UUMG_SeasonPassQuestRibbon_C* PassRibbon, class UWidget* Notsubscribed, bool IsGetRewardItem, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_SeasonPassMenu_C", "SetSeasonPassQuestListItem");

	Params::FLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem Parms{};

	Parms.SBSeasonPassQuestItemData = std::move(SBSeasonPassQuestItemData);
	Parms.Cycle = Cycle;
	Parms.QuestName = QuestName;
	Parms.Progress = Progress;
	Parms.Cleared = Cleared;
	Parms.ItemIconArray = std::move(ItemIconArray);
	Parms.Switcher_RewardBtn = Switcher_RewardBtn;
	Parms.Button_Clear = Button_Clear;
	Parms.Button_Clear_Arrow = Button_Clear_Arrow;
	Parms.RankPoint = RankPoint;
	Parms.PassRibbon = PassRibbon;
	Parms.Notsubscribed = Notsubscribed;
	Parms.IsGetRewardItem = IsGetRewardItem;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	ItemIconArray = std::move(Parms.ItemIconArray);
}


// Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.UpdateSubMenuExclamation
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFLIB_SeasonPassMenu_C::UpdateSubMenuExclamation(class UObject* Sender, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_SeasonPassMenu_C", "UpdateSubMenuExclamation");

	Params::FLIB_SeasonPassMenu_C_UpdateSubMenuExclamation Parms{};

	Parms.Sender = Sender;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}

