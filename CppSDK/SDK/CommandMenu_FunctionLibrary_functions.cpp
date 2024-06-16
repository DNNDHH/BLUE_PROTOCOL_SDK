#pragma once

 

// Package: CommandMenu_FunctionLibrary

#include "Basic.hpp"

#include "CommandMenu_FunctionLibrary_classes.hpp"
#include "CommandMenu_FunctionLibrary_parameters.hpp"


namespace SDK
{

// Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.OpenTutorialHelp_CommandMenu
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_FunctionLibrary_C::OpenTutorialHelp_CommandMenu(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CommandMenu_FunctionLibrary_C", "OpenTutorialHelp_CommandMenu");

	Params::CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.InitTutorialHelp_CommandMenu
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InMustDisplayed                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_FunctionLibrary_C::InitTutorialHelp_CommandMenu(class FName InId, bool InMustDisplayed, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CommandMenu_FunctionLibrary_C", "InitTutorialHelp_CommandMenu");

	Params::CommandMenu_FunctionLibrary_C_InitTutorialHelp_CommandMenu Parms{};

	Parms.InId = InId;
	Parms.InMustDisplayed = InMustDisplayed;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.BookmarkTypeToRmShopMenuType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           Key                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBRmShopMenuType                       Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_FunctionLibrary_C::BookmarkTypeToRmShopMenuType(const class FString& Key, class UObject* __WorldContext, ESBRmShopMenuType* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CommandMenu_FunctionLibrary_C", "BookmarkTypeToRmShopMenuType");

	Params::CommandMenu_FunctionLibrary_C_BookmarkTypeToRmShopMenuType Parms{};

	Parms.Key = std::move(Key);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;
}


// Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.GetGuildComp
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USBPlayerGuildComponent*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBPlayerGuildComponent* UCommandMenu_FunctionLibrary_C::GetGuildComp(class UObject* __WorldContext, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CommandMenu_FunctionLibrary_C", "GetGuildComp");

	Params::CommandMenu_FunctionLibrary_C_GetGuildComp Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	return Parms.ReturnValue;
}


// Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.KeyconfigActionToBookmark
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBKeyConfigAction                      QuickAccessKey                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           ReturnValue1                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UCommandMenu_FunctionLibrary_C::KeyconfigActionToBookmark(ESBKeyConfigAction QuickAccessKey, class UObject* __WorldContext, class FString* ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CommandMenu_FunctionLibrary_C", "KeyconfigActionToBookmark");

	Params::CommandMenu_FunctionLibrary_C_KeyconfigActionToBookmark Parms{};

	Parms.QuickAccessKey = QuickAccessKey;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (ReturnValue1 != nullptr)
		*ReturnValue1 = std::move(Parms.ReturnValue1);
}


// Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.GetTutorialHelpText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBTextTableAsset*                InTextTableAsset                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             InTextID                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FText                       ReturnValue                                            (ConstParm, Parm, OutParm, ReturnParm)

const class FText UCommandMenu_FunctionLibrary_C::GetTutorialHelpText(const class USBTextTableAsset* InTextTableAsset, const class FName InTextID, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CommandMenu_FunctionLibrary_C", "GetTutorialHelpText");

	Params::CommandMenu_FunctionLibrary_C_GetTutorialHelpText Parms{};

	Parms.InTextTableAsset = InTextTableAsset;
	Parms.InTextID = InTextID;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.OpenTutorialHelp_CommandMenu_By HelpId
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             TutorialHelpId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_FunctionLibrary_C::OpenTutorialHelp_CommandMenu_By_HelpId(class FName TutorialHelpId, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CommandMenu_FunctionLibrary_C", "OpenTutorialHelp_CommandMenu_By HelpId");

	Params::CommandMenu_FunctionLibrary_C_OpenTutorialHelp_CommandMenu_By_HelpId Parms{};

	Parms.TutorialHelpId = TutorialHelpId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.IsLoginBonusBtnEnable
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Enable                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_FunctionLibrary_C::IsLoginBonusBtnEnable(class UObject* __WorldContext, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CommandMenu_FunctionLibrary_C", "IsLoginBonusBtnEnable");

	Params::CommandMenu_FunctionLibrary_C_IsLoginBonusBtnEnable Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;
}


// Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.Is Adventure Rank Board Enable
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Enable                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_FunctionLibrary_C::Is_Adventure_Rank_Board_Enable(class UObject* __WorldContext, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CommandMenu_FunctionLibrary_C", "Is Adventure Rank Board Enable");

	Params::CommandMenu_FunctionLibrary_C_Is_Adventure_Rank_Board_Enable Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;
}


// Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.CheckBookmarkID
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InBookmarkID                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsActive                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           ReplacementID                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UCommandMenu_FunctionLibrary_C::CheckBookmarkID(const class FString& InBookmarkID, class UObject* __WorldContext, bool* IsActive, class FString* ReplacementID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CommandMenu_FunctionLibrary_C", "CheckBookmarkID");

	Params::CommandMenu_FunctionLibrary_C_CheckBookmarkID Parms{};

	Parms.InBookmarkID = std::move(InBookmarkID);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsActive != nullptr)
		*IsActive = Parms.IsActive;

	if (ReplacementID != nullptr)
		*ReplacementID = std::move(Parms.ReplacementID);
}


// Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.IsWishItemCollectionCompleted
// (Static, Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FRequiredMaterialInfo>    RequiredMaterialInfo                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bCompleted                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_FunctionLibrary_C::IsWishItemCollectionCompleted(TArray<struct FRequiredMaterialInfo>& RequiredMaterialInfo, class UObject* __WorldContext, bool* bCompleted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CommandMenu_FunctionLibrary_C", "IsWishItemCollectionCompleted");

	Params::CommandMenu_FunctionLibrary_C_IsWishItemCollectionCompleted Parms{};

	Parms.RequiredMaterialInfo = std::move(RequiredMaterialInfo);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	RequiredMaterialInfo = std::move(Parms.RequiredMaterialInfo);

	if (bCompleted != nullptr)
		*bCompleted = Parms.bCompleted;
}


// Function CommandMenu_FunctionLibrary.CommandMenu_FunctionLibrary_C.IsWishListExclamation
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_FunctionLibrary_C::IsWishListExclamation(class UObject* __WorldContext, bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CommandMenu_FunctionLibrary_C", "IsWishListExclamation");

	Params::CommandMenu_FunctionLibrary_C_IsWishListExclamation Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}

}

