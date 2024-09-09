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
	 * 		Name   -> Function FLIB_ShopMenuDetails.FLIB_ShopMenuDetails_C.GetUnknownAbilityText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UFLIB_ShopMenuDetails_C::GetUnknownAbilityText(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_ShopMenuDetails.FLIB_ShopMenuDetails_C.GetUnknownAbilityText");
		
		UFLIB_ShopMenuDetails_C_GetUnknownAbilityText_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_ShopMenuDetails.FLIB_ShopMenuDetails_C.GetAbilityName_Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMasterImaginePerkTable                     MasterImaginePerkTable                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHasValidAbility                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        AbilityName                                                (Parm, OutParm)
	 * 		int32_t                                            PerkId                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bShowRateButton                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFLIB_ShopMenuDetails_C::GetAbilityName_Internal(const struct FMasterImaginePerkTable& MasterImaginePerkTable, class UObject* __WorldContext, bool* bHasValidAbility, class FText* AbilityName, int32_t* PerkId, bool* bShowRateButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_ShopMenuDetails.FLIB_ShopMenuDetails_C.GetAbilityName_Internal");
		
		UFLIB_ShopMenuDetails_C_GetAbilityName_Internal_Params params {};
		params.MasterImaginePerkTable = MasterImaginePerkTable;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bHasValidAbility != nullptr)
			*bHasValidAbility = params.bHasValidAbility;
		if (AbilityName != nullptr)
			*AbilityName = params.AbilityName;
		if (PerkId != nullptr)
			*PerkId = params.PerkId;
		if (bShowRateButton != nullptr)
			*bShowRateButton = params.bShowRateButton;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_ShopMenuDetails.FLIB_ShopMenuDetails_C.GetAbilityName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESBRewardItemType                                  OriginalRewardType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OriginalItemIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHasValidAbility                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        AbilityName                                                (Parm, OutParm)
	 * 		int32_t                                            PerkId                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bShowRateButton                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFLIB_ShopMenuDetails_C::GetAbilityName(const class FString& UniqueId, ESBRewardItemType OriginalRewardType, int32_t OriginalItemIndex, class UObject* __WorldContext, bool* bHasValidAbility, class FText* AbilityName, int32_t* PerkId, bool* bShowRateButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_ShopMenuDetails.FLIB_ShopMenuDetails_C.GetAbilityName");
		
		UFLIB_ShopMenuDetails_C_GetAbilityName_Params params {};
		params.UniqueId = UniqueId;
		params.OriginalRewardType = OriginalRewardType;
		params.OriginalItemIndex = OriginalItemIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bHasValidAbility != nullptr)
			*bHasValidAbility = params.bHasValidAbility;
		if (AbilityName != nullptr)
			*AbilityName = params.AbilityName;
		if (PerkId != nullptr)
			*PerkId = params.PerkId;
		if (bShowRateButton != nullptr)
			*bShowRateButton = params.bShowRateButton;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFLIB_ShopMenuDetails_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFLIB_ShopMenuDetails_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FLIB_ShopMenuDetails.FLIB_ShopMenuDetails_C");
		return ptr;
	}

}


