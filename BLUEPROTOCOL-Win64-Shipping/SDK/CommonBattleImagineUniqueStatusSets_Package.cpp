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
	 * 		Name   -> Function CommonBattleImagineUniqueStatusSets.CommonBattleImagineUniqueStatusSets_C.SetMasterDataById
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonBattleImagineUniqueStatusSets_C::SetMasterDataById(int32_t ItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonBattleImagineUniqueStatusSets.CommonBattleImagineUniqueStatusSets_C.SetMasterDataById");
		
		UCommonBattleImagineUniqueStatusSets_C_SetMasterDataById_Params params {};
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonBattleImagineUniqueStatusSets.CommonBattleImagineUniqueStatusSets_C.SetMasterData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            SBMasterImagine                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommonBattleImagineUniqueStatusSets_C::SetMasterData(const struct FSBMasterImagine& SBMasterImagine, const class FString& UniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonBattleImagineUniqueStatusSets.CommonBattleImagineUniqueStatusSets_C.SetMasterData");
		
		UCommonBattleImagineUniqueStatusSets_C_SetMasterData_Params params {};
		params.SBMasterImagine = SBMasterImagine;
		params.UniqueId = UniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonBattleImagineUniqueStatusSets.CommonBattleImagineUniqueStatusSets_C.SetPossessionInfoVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonBattleImagineUniqueStatusSets_C::SetPossessionInfoVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonBattleImagineUniqueStatusSets.CommonBattleImagineUniqueStatusSets_C.SetPossessionInfoVisibility");
		
		UCommonBattleImagineUniqueStatusSets_C_SetPossessionInfoVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonBattleImagineUniqueStatusSets.CommonBattleImagineUniqueStatusSets_C.SetPermanentInfoVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonBattleImagineUniqueStatusSets_C::SetPermanentInfoVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonBattleImagineUniqueStatusSets.CommonBattleImagineUniqueStatusSets_C.SetPermanentInfoVisibility");
		
		UCommonBattleImagineUniqueStatusSets_C_SetPermanentInfoVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonBattleImagineUniqueStatusSets.CommonBattleImagineUniqueStatusSets_C.ExecuteUbergraph_CommonBattleImagineUniqueStatusSets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonBattleImagineUniqueStatusSets_C::ExecuteUbergraph_CommonBattleImagineUniqueStatusSets(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonBattleImagineUniqueStatusSets.CommonBattleImagineUniqueStatusSets_C.ExecuteUbergraph_CommonBattleImagineUniqueStatusSets");
		
		UCommonBattleImagineUniqueStatusSets_C_ExecuteUbergraph_CommonBattleImagineUniqueStatusSets_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonBattleImagineUniqueStatusSets_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonBattleImagineUniqueStatusSets_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonBattleImagineUniqueStatusSets.CommonBattleImagineUniqueStatusSets_C");
		return ptr;
	}

}


