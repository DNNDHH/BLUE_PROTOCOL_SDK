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
	 * 		Name   -> Function MyCharaMenu_EquippedCostumeInfo.MyCharaMenu_EquippedCostumeInfo_C.GetRingEquippedHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCharaEquipType                                  InRingEquipType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsLeftFinger                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_EquippedCostumeInfo_C::GetRingEquippedHand(ESBCharaEquipType InRingEquipType, bool* OutIsLeftFinger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EquippedCostumeInfo.MyCharaMenu_EquippedCostumeInfo_C.GetRingEquippedHand");
		
		UMyCharaMenu_EquippedCostumeInfo_C_GetRingEquippedHand_Params params {};
		params.InRingEquipType = InRingEquipType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsLeftFinger != nullptr)
			*OutIsLeftFinger = params.OutIsLeftFinger;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EquippedCostumeInfo.MyCharaMenu_EquippedCostumeInfo_C.UpdateEquippedCostumeInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_MyCharaMenu_EquippedCostumeType                  InEquippedCostumeType                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharaEquipInfo                             InCharaEquipInfo                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<ECharaPartsLocation>                        InGrayOutCharaPartsLocations                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMyCharaMenu_EquippedCostumeInfo_C::UpdateEquippedCostumeInfo(E_MyCharaMenu_EquippedCostumeType InEquippedCostumeType, const struct FCharaEquipInfo& InCharaEquipInfo, TArray<ECharaPartsLocation>* InGrayOutCharaPartsLocations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EquippedCostumeInfo.MyCharaMenu_EquippedCostumeInfo_C.UpdateEquippedCostumeInfo");
		
		UMyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo_Params params {};
		params.InEquippedCostumeType = InEquippedCostumeType;
		params.InCharaEquipInfo = InCharaEquipInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InGrayOutCharaPartsLocations != nullptr)
			*InGrayOutCharaPartsLocations = params.InGrayOutCharaPartsLocations;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EquippedCostumeInfo.MyCharaMenu_EquippedCostumeInfo_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_EquippedCostumeInfo_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EquippedCostumeInfo.MyCharaMenu_EquippedCostumeInfo_C.PreConstruct");
		
		UMyCharaMenu_EquippedCostumeInfo_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EquippedCostumeInfo.MyCharaMenu_EquippedCostumeInfo_C.ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_EquippedCostumeInfo_C::ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EquippedCostumeInfo.MyCharaMenu_EquippedCostumeInfo_C.ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo");
		
		UMyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMyCharaMenu_EquippedCostumeInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyCharaMenu_EquippedCostumeInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MyCharaMenu_EquippedCostumeInfo.MyCharaMenu_EquippedCostumeInfo_C");
		return ptr;
	}

}


