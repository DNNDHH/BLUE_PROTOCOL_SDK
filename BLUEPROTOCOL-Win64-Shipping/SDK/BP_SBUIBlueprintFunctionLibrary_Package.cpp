/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.IsUseSkyStore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SBUIBlueprintFunctionLibrary_C::IsUseSkyStore(class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.IsUseSkyStore");
		
		UBP_SBUIBlueprintFunctionLibrary_C_IsUseSkyStore_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.GetAdventureboardCompleteRewardString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InBoardId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OutRewardString                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_SBUIBlueprintFunctionLibrary_C::GetAdventureboardCompleteRewardString(int32_t InBoardId, class UObject* __WorldContext, class FString* OutRewardString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.GetAdventureboardCompleteRewardString");
		
		UBP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardCompleteRewardString_Params params {};
		params.InBoardId = InBoardId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRewardString != nullptr)
			*OutRewardString = params.OutRewardString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.GetAdventureboardGoalRewardString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InBoardId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OutRewadString                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_SBUIBlueprintFunctionLibrary_C::GetAdventureboardGoalRewardString(int32_t InBoardId, class UObject* __WorldContext, class FString* OutRewadString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.GetAdventureboardGoalRewardString");
		
		UBP_SBUIBlueprintFunctionLibrary_C_GetAdventureboardGoalRewardString_Params params {};
		params.InBoardId = InBoardId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRewadString != nullptr)
			*OutRewadString = params.OutRewadString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.GetRewardString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                InRewardId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OutString                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_SBUIBlueprintFunctionLibrary_C::GetRewardString(TArray<class FName>* InRewardId, class UObject* __WorldContext, class FString* OutString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.GetRewardString");
		
		UBP_SBUIBlueprintFunctionLibrary_C_GetRewardString_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InRewardId != nullptr)
			*InRewardId = params.InRewardId;
		if (OutString != nullptr)
			*OutString = params.OutString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.SetTextColorComparison
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                  Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateColor                                 InColorAndOpacity                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBUIBlueprintFunctionLibrary_C::SetTextColorComparison(class UTextBlock* Target, const struct FSlateColor& InColorAndOpacity, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.SetTextColorComparison");
		
		UBP_SBUIBlueprintFunctionLibrary_C_SetTextColorComparison_Params params {};
		params.Target = Target;
		params.InColorAndOpacity = InColorAndOpacity;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.SetTextComparison
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                  Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBUIBlueprintFunctionLibrary_C::SetTextComparison(class UTextBlock* Target, const class FText& InText, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.SetTextComparison");
		
		UBP_SBUIBlueprintFunctionLibrary_C_SetTextComparison_Params params {};
		params.Target = Target;
		params.InText = InText;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.IsDhcBattleMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsDhcBattleMap                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SBUIBlueprintFunctionLibrary_C::IsDhcBattleMap(class UObject* __WorldContext, bool* IsDhcBattleMap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.IsDhcBattleMap");
		
		UBP_SBUIBlueprintFunctionLibrary_C_IsDhcBattleMap_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsDhcBattleMap != nullptr)
			*IsDhcBattleMap = params.IsDhcBattleMap;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.SetStackBEnableColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBStackBEnableType                                InStackBEnableType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  InTextWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsStackBEnableFull                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SBUIBlueprintFunctionLibrary_C::SetStackBEnableColor(ESBStackBEnableType InStackBEnableType, class UTextBlock* InTextWidget, class UObject* __WorldContext, bool* OutIsStackBEnableFull)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.SetStackBEnableColor");
		
		UBP_SBUIBlueprintFunctionLibrary_C_SetStackBEnableColor_Params params {};
		params.InStackBEnableType = InStackBEnableType;
		params.InTextWidget = InTextWidget;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsStackBEnableFull != nullptr)
			*OutIsStackBEnableFull = params.OutIsStackBEnableFull;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.GetStackBEnableType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InWorldContextObject                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBStackBEnableType                                OutStackBEnableType                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBUIBlueprintFunctionLibrary_C::GetStackBEnableType(class UObject* InWorldContextObject, class UObject* __WorldContext, ESBStackBEnableType* OutStackBEnableType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.GetStackBEnableType");
		
		UBP_SBUIBlueprintFunctionLibrary_C_GetStackBEnableType_Params params {};
		params.InWorldContextObject = InWorldContextObject;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutStackBEnableType != nullptr)
			*OutStackBEnableType = params.OutStackBEnableType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.SetVisibilityComparison
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBUIBlueprintFunctionLibrary_C::SetVisibilityComparison(class UWidget* Target, ESlateVisibility InVisibility, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.SetVisibilityComparison");
		
		UBP_SBUIBlueprintFunctionLibrary_C_SetVisibilityComparison_Params params {};
		params.Target = Target;
		params.InVisibility = InVisibility;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.GetImagineLevelSyncLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inImagineUniqueId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InImagineLevel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutImagineLevel                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBUIBlueprintFunctionLibrary_C::GetImagineLevelSyncLevel(const class FString& inImagineUniqueId, int32_t InImagineLevel, class UObject* __WorldContext, int32_t* OutImagineLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.GetImagineLevelSyncLevel");
		
		UBP_SBUIBlueprintFunctionLibrary_C_GetImagineLevelSyncLevel_Params params {};
		params.inImagineUniqueId = inImagineUniqueId;
		params.InImagineLevel = InImagineLevel;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutImagineLevel != nullptr)
			*OutImagineLevel = params.OutImagineLevel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.SetFullscreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCanvasPanelSlot*                            CanvasPanelSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBUIBlueprintFunctionLibrary_C::SetFullscreen(class UCanvasPanelSlot* CanvasPanelSlot, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.SetFullscreen");
		
		UBP_SBUIBlueprintFunctionLibrary_C_SetFullscreen_Params params {};
		params.CanvasPanelSlot = CanvasPanelSlot;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.SetLevelSyncColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTextBlock*                                  InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsLevelSync                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SBUIBlueprintFunctionLibrary_C::SetLevelSyncColor(bool Condition, class UTextBlock* InputPin, class UObject* __WorldContext, bool* bIsLevelSync)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.SetLevelSyncColor");
		
		UBP_SBUIBlueprintFunctionLibrary_C_SetLevelSyncColor_Params params {};
		params.Condition = Condition;
		params.InputPin = InputPin;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsLevelSync != nullptr)
			*bIsLevelSync = params.bIsLevelSync;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.ChangeWeaponLevelSyncByWeaponId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InWeaponID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  InTextWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsLevelSync                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SBUIBlueprintFunctionLibrary_C::ChangeWeaponLevelSyncByWeaponId(int32_t InWeaponID, class UTextBlock* InTextWidget, class UObject* __WorldContext, bool* bIsLevelSync)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.ChangeWeaponLevelSyncByWeaponId");
		
		UBP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSyncByWeaponId_Params params {};
		params.InWeaponID = InWeaponID;
		params.InTextWidget = InTextWidget;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsLevelSync != nullptr)
			*bIsLevelSync = params.bIsLevelSync;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.ChangeWeaponLevelSync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InItemUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  InTextWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InStoregeCheck                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsLevelSync                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SBUIBlueprintFunctionLibrary_C::ChangeWeaponLevelSync(const class FString& InItemUniqueId, class UTextBlock* InTextWidget, bool InStoregeCheck, class UObject* __WorldContext, bool* bIsLevelSync)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.ChangeWeaponLevelSync");
		
		UBP_SBUIBlueprintFunctionLibrary_C_ChangeWeaponLevelSync_Params params {};
		params.InItemUniqueId = InItemUniqueId;
		params.InTextWidget = InTextWidget;
		params.InStoregeCheck = InStoregeCheck;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsLevelSync != nullptr)
			*bIsLevelSync = params.bIsLevelSync;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.ChangeImagineLevelSync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InItemUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  InTextWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InStorageCheck                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InUseClassTypeForLevelSync                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBClassType                                       InClassTypeForLevelSync                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ForceLevelSyncOff                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsLevelSync                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SBUIBlueprintFunctionLibrary_C::ChangeImagineLevelSync(const class FString& InItemUniqueId, class UTextBlock* InTextWidget, bool InStorageCheck, bool InUseClassTypeForLevelSync, ESBClassType InClassTypeForLevelSync, bool ForceLevelSyncOff, class UObject* __WorldContext, bool* bIsLevelSync)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.ChangeImagineLevelSync");
		
		UBP_SBUIBlueprintFunctionLibrary_C_ChangeImagineLevelSync_Params params {};
		params.InItemUniqueId = InItemUniqueId;
		params.InTextWidget = InTextWidget;
		params.InStorageCheck = InStorageCheck;
		params.InUseClassTypeForLevelSync = InUseClassTypeForLevelSync;
		params.InClassTypeForLevelSync = InClassTypeForLevelSync;
		params.ForceLevelSyncOff = ForceLevelSyncOff;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsLevelSync != nullptr)
			*bIsLevelSync = params.bIsLevelSync;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.IsRegisterWishlistLimit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsRegisterWishList                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SBUIBlueprintFunctionLibrary_C::IsRegisterWishlistLimit(class UObject* WorldContextObject, class UObject* __WorldContext, bool* bIsRegisterWishList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.IsRegisterWishlistLimit");
		
		UBP_SBUIBlueprintFunctionLibrary_C_IsRegisterWishlistLimit_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsRegisterWishList != nullptr)
			*bIsRegisterWishList = params.bIsRegisterWishList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.ChangeLevelSyncTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                  InTextWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InItemUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               InStoregeCheck                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsLevelSync                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SBUIBlueprintFunctionLibrary_C::ChangeLevelSyncTextColor(class UTextBlock* InTextWidget, const class FString& InItemUniqueId, bool InStoregeCheck, class UObject* __WorldContext, bool* bIsLevelSync)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.ChangeLevelSyncTextColor");
		
		UBP_SBUIBlueprintFunctionLibrary_C_ChangeLevelSyncTextColor_Params params {};
		params.InTextWidget = InTextWidget;
		params.InItemUniqueId = InItemUniqueId;
		params.InStoregeCheck = InStoregeCheck;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsLevelSync != nullptr)
			*bIsLevelSync = params.bIsLevelSync;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.CastOuterAsWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUserWidget*                                 OwnerWidget                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     OuteroObject                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBUIBlueprintFunctionLibrary_C::CastOuterAsWidget(class UObject* Widget, class UObject* __WorldContext, class UUserWidget** OwnerWidget, bool* Result, class UObject** OuteroObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.CastOuterAsWidget");
		
		UBP_SBUIBlueprintFunctionLibrary_C_CastOuterAsWidget_Params params {};
		params.Widget = Widget;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OwnerWidget != nullptr)
			*OwnerWidget = params.OwnerWidget;
		if (Result != nullptr)
			*Result = params.Result;
		if (OuteroObject != nullptr)
			*OuteroObject = params.OuteroObject;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.GetParentWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Children                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUserWidget*                                 Parent                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBUIBlueprintFunctionLibrary_C::GetParentWidget(class UObject* Children, class UObject* __WorldContext, class UUserWidget** Parent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.GetParentWidget");
		
		UBP_SBUIBlueprintFunctionLibrary_C_GetParentWidget_Params params {};
		params.Children = Children;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Parent != nullptr)
			*Parent = params.Parent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.CanInterruptNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IgnoreFindnemy                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SBUIBlueprintFunctionLibrary_C::CanInterruptNotification(bool IgnoreFindnemy, class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C.CanInterruptNotification");
		
		UBP_SBUIBlueprintFunctionLibrary_C_CanInterruptNotification_Params params {};
		params.IgnoreFindnemy = IgnoreFindnemy;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_SBUIBlueprintFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_SBUIBlueprintFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SBUIBlueprintFunctionLibrary.BP_SBUIBlueprintFunctionLibrary_C");
		return ptr;
	}

}


