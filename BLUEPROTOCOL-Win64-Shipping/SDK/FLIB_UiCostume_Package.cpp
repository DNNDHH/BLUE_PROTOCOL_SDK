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
	 * 		Name   -> Function FLIB_UiCostume.FLIB_UiCostume_C.GetCostumeEquipTypeFromPartsLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharaPartsLocation                                InPartsLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBCharaEquipType                                  OutEquipType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFLIB_UiCostume_C::GetCostumeEquipTypeFromPartsLocation(ECharaPartsLocation InPartsLocation, class UObject* __WorldContext, ESBCharaEquipType* OutEquipType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UiCostume.FLIB_UiCostume_C.GetCostumeEquipTypeFromPartsLocation");
		
		UFLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation_Params params {};
		params.InPartsLocation = InPartsLocation;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEquipType != nullptr)
			*OutEquipType = params.OutEquipType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UiCostume.FLIB_UiCostume_C.FindCostumeConflictingCompositeWearByEquipInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharaEquipInfo                             InCostumeEquipInfo                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESBCharaEquipType                                  InCostumeEquipType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBCharacterGender                                 InCharacterGender                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsConflictingCompositeWear                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBCharaEquipType                                  OutConflictingCostumeEquipType                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFLIB_UiCostume_C::FindCostumeConflictingCompositeWearByEquipInfo(const struct FCharaEquipInfo& InCostumeEquipInfo, ESBCharaEquipType InCostumeEquipType, ESBCharacterGender InCharacterGender, class UObject* __WorldContext, bool* OutIsConflictingCompositeWear, ESBCharaEquipType* OutConflictingCostumeEquipType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UiCostume.FLIB_UiCostume_C.FindCostumeConflictingCompositeWearByEquipInfo");
		
		UFLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo_Params params {};
		params.InCostumeEquipInfo = InCostumeEquipInfo;
		params.InCostumeEquipType = InCostumeEquipType;
		params.InCharacterGender = InCharacterGender;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsConflictingCompositeWear != nullptr)
			*OutIsConflictingCompositeWear = params.OutIsConflictingCompositeWear;
		if (OutConflictingCostumeEquipType != nullptr)
			*OutConflictingCostumeEquipType = params.OutConflictingCostumeEquipType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UiCostume.FLIB_UiCostume_C.FindCostumeConflictingCompositeWear
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    InCostumeItemIds                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBCharaEquipType                                  InCostumeEquipType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBCharacterGender                                 InCharacterGender                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsConflictingCompositeWear                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBCharaEquipType                                  OutConflictingCostumeEquipType                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFLIB_UiCostume_C::FindCostumeConflictingCompositeWear(TArray<int32_t>* InCostumeItemIds, ESBCharaEquipType InCostumeEquipType, ESBCharacterGender InCharacterGender, class UObject* __WorldContext, bool* OutIsConflictingCompositeWear, ESBCharaEquipType* OutConflictingCostumeEquipType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UiCostume.FLIB_UiCostume_C.FindCostumeConflictingCompositeWear");
		
		UFLIB_UiCostume_C_FindCostumeConflictingCompositeWear_Params params {};
		params.InCostumeEquipType = InCostumeEquipType;
		params.InCharacterGender = InCharacterGender;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InCostumeItemIds != nullptr)
			*InCostumeItemIds = params.InCostumeItemIds;
		if (OutIsConflictingCompositeWear != nullptr)
			*OutIsConflictingCompositeWear = params.OutIsConflictingCompositeWear;
		if (OutConflictingCostumeEquipType != nullptr)
			*OutConflictingCostumeEquipType = params.OutConflictingCostumeEquipType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UiCostume.FLIB_UiCostume_C.CharaPartsLocationToProtectorCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharaPartsLocation                                CharaPartsLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EProtectorCategory                                 ProtectorCategory                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFLIB_UiCostume_C::CharaPartsLocationToProtectorCategory(ECharaPartsLocation CharaPartsLocation, class UObject* __WorldContext, EProtectorCategory* ProtectorCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UiCostume.FLIB_UiCostume_C.CharaPartsLocationToProtectorCategory");
		
		UFLIB_UiCostume_C_CharaPartsLocationToProtectorCategory_Params params {};
		params.CharaPartsLocation = CharaPartsLocation;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ProtectorCategory != nullptr)
			*ProtectorCategory = params.ProtectorCategory;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UiCostume.FLIB_UiCostume_C.ProtectorCategoryToCharaPartsLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EProtectorCategory                                 InProtectorCategory                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ECharaPartsLocation                                OutCharaPartsLocation                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFLIB_UiCostume_C::ProtectorCategoryToCharaPartsLocation(EProtectorCategory InProtectorCategory, class UObject* __WorldContext, bool* OutIsValid, ECharaPartsLocation* OutCharaPartsLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UiCostume.FLIB_UiCostume_C.ProtectorCategoryToCharaPartsLocation");
		
		UFLIB_UiCostume_C_ProtectorCategoryToCharaPartsLocation_Params params {};
		params.InProtectorCategory = InProtectorCategory;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsValid != nullptr)
			*OutIsValid = params.OutIsValid;
		if (OutCharaPartsLocation != nullptr)
			*OutCharaPartsLocation = params.OutCharaPartsLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UiCostume.FLIB_UiCostume_C.GetCharaPartsLocationFromProtectorCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EProtectorCategory                                 InProtectorCategory                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ECharaPartsLocation                                OutCharaPartsLocation                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFLIB_UiCostume_C::GetCharaPartsLocationFromProtectorCategory(EProtectorCategory InProtectorCategory, class UObject* __WorldContext, bool* OutIsValid, ECharaPartsLocation* OutCharaPartsLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UiCostume.FLIB_UiCostume_C.GetCharaPartsLocationFromProtectorCategory");
		
		UFLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory_Params params {};
		params.InProtectorCategory = InProtectorCategory;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsValid != nullptr)
			*OutIsValid = params.OutIsValid;
		if (OutCharaPartsLocation != nullptr)
			*OutCharaPartsLocation = params.OutCharaPartsLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UiCostume.FLIB_UiCostume_C.GetCostumeWearingPartsTextIdForCompositeWear
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutTextID                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFLIB_UiCostume_C::GetCostumeWearingPartsTextIdForCompositeWear(class UObject* __WorldContext, int32_t* OutTextID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UiCostume.FLIB_UiCostume_C.GetCostumeWearingPartsTextIdForCompositeWear");
		
		UFLIB_UiCostume_C_GetCostumeWearingPartsTextIdForCompositeWear_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTextID != nullptr)
			*OutTextID = params.OutTextID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UiCostume.FLIB_UiCostume_C.GetCostumeWearingPartsTextIdFromProtectorCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      InProtectorCategory                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutTextID                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFLIB_UiCostume_C::GetCostumeWearingPartsTextIdFromProtectorCategory(unsigned char InProtectorCategory, class UObject* __WorldContext, int32_t* OutTextID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UiCostume.FLIB_UiCostume_C.GetCostumeWearingPartsTextIdFromProtectorCategory");
		
		UFLIB_UiCostume_C_GetCostumeWearingPartsTextIdFromProtectorCategory_Params params {};
		params.InProtectorCategory = InProtectorCategory;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTextID != nullptr)
			*OutTextID = params.OutTextID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UiCostume.FLIB_UiCostume_C.GetCostumeWearingPartsText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterCostume                            MasterCostume                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString UFLIB_UiCostume_C::GetCostumeWearingPartsText(const struct FSBMasterCostume& MasterCostume, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UiCostume.FLIB_UiCostume_C.GetCostumeWearingPartsText");
		
		UFLIB_UiCostume_C_GetCostumeWearingPartsText_Params params {};
		params.MasterCostume = MasterCostume;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UiCostume.FLIB_UiCostume_C.GetOccupiedLocationByCostumeId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CostumeId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBCharacterGender                                 InCharacterGender                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bUseCostumeGender                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<EProtectorCategory>                         Result                                                     (Parm, OutParm)
	 * 		struct FSBMasterCostume                            MasterCostume                                              (Parm, OutParm)
	 */
	void UFLIB_UiCostume_C::GetOccupiedLocationByCostumeId(int32_t CostumeId, ESBCharacterGender InCharacterGender, bool bUseCostumeGender, class UObject* __WorldContext, bool* bIsValid, TArray<EProtectorCategory>* Result, struct FSBMasterCostume* MasterCostume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UiCostume.FLIB_UiCostume_C.GetOccupiedLocationByCostumeId");
		
		UFLIB_UiCostume_C_GetOccupiedLocationByCostumeId_Params params {};
		params.CostumeId = CostumeId;
		params.InCharacterGender = InCharacterGender;
		params.bUseCostumeGender = bUseCostumeGender;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
		if (Result != nullptr)
			*Result = params.Result;
		if (MasterCostume != nullptr)
			*MasterCostume = params.MasterCostume;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UiCostume.FLIB_UiCostume_C.GetOccupiedLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterCostume                            MasterCostume                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBCharacterGender                                 InCharacterGender                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bUseCostumeGender                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<EProtectorCategory>                         Result                                                     (Parm, OutParm)
	 */
	void UFLIB_UiCostume_C::GetOccupiedLocation(const struct FSBMasterCostume& MasterCostume, ESBCharacterGender InCharacterGender, bool bUseCostumeGender, class UObject* __WorldContext, TArray<EProtectorCategory>* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UiCostume.FLIB_UiCostume_C.GetOccupiedLocation");
		
		UFLIB_UiCostume_C_GetOccupiedLocation_Params params {};
		params.MasterCostume = MasterCostume;
		params.InCharacterGender = InCharacterGender;
		params.bUseCostumeGender = bUseCostumeGender;
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
	 * 		Name   -> Function FLIB_UiCostume.FLIB_UiCostume_C.IsCompositeWearByCostumeId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CostumeId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBCharacterGender                                 InCharacterGender                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bUseCostumeGender                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsCompositeWear                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<ECharaPartsLocation>                        OccupiedPartsLocations                                     (Parm, OutParm)
	 * 		struct FSBMasterCostume                            MasterCostume                                              (Parm, OutParm)
	 */
	void UFLIB_UiCostume_C::IsCompositeWearByCostumeId(int32_t CostumeId, ESBCharacterGender InCharacterGender, bool bUseCostumeGender, class UObject* __WorldContext, bool* bIsValid, bool* IsCompositeWear, TArray<ECharaPartsLocation>* OccupiedPartsLocations, struct FSBMasterCostume* MasterCostume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UiCostume.FLIB_UiCostume_C.IsCompositeWearByCostumeId");
		
		UFLIB_UiCostume_C_IsCompositeWearByCostumeId_Params params {};
		params.CostumeId = CostumeId;
		params.InCharacterGender = InCharacterGender;
		params.bUseCostumeGender = bUseCostumeGender;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
		if (IsCompositeWear != nullptr)
			*IsCompositeWear = params.IsCompositeWear;
		if (OccupiedPartsLocations != nullptr)
			*OccupiedPartsLocations = params.OccupiedPartsLocations;
		if (MasterCostume != nullptr)
			*MasterCostume = params.MasterCostume;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UiCostume.FLIB_UiCostume_C.IsCompositeWearByMasterCostume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterCostume                            MasterCostume                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBCharacterGender                                 InCharacterGender                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bUseCostumeGender                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsCompositeWear                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<ECharaPartsLocation>                        OutOccupiedPartsLocations                                  (Parm, OutParm)
	 */
	void UFLIB_UiCostume_C::IsCompositeWearByMasterCostume(const struct FSBMasterCostume& MasterCostume, ESBCharacterGender InCharacterGender, bool bUseCostumeGender, class UObject* __WorldContext, bool* OutIsCompositeWear, TArray<ECharaPartsLocation>* OutOccupiedPartsLocations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UiCostume.FLIB_UiCostume_C.IsCompositeWearByMasterCostume");
		
		UFLIB_UiCostume_C_IsCompositeWearByMasterCostume_Params params {};
		params.MasterCostume = MasterCostume;
		params.InCharacterGender = InCharacterGender;
		params.bUseCostumeGender = bUseCostumeGender;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsCompositeWear != nullptr)
			*OutIsCompositeWear = params.OutIsCompositeWear;
		if (OutOccupiedPartsLocations != nullptr)
			*OutOccupiedPartsLocations = params.OutOccupiedPartsLocations;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UiCostume.FLIB_UiCostume_C.CheckCostumePartsIsCompositeWear
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InCostumePartsName                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		EProtectorCategory                                 InCostumePartsCategory                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBCharacterGender                                 InCharacterGender                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsCompositeWear                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<ECharaPartsLocation>                        OutOccupiedPartsLocations                                  (Parm, OutParm)
	 */
	void UFLIB_UiCostume_C::CheckCostumePartsIsCompositeWear(const class FString& InCostumePartsName, EProtectorCategory InCostumePartsCategory, ESBCharacterGender InCharacterGender, class UObject* __WorldContext, bool* OutIsCompositeWear, TArray<ECharaPartsLocation>* OutOccupiedPartsLocations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UiCostume.FLIB_UiCostume_C.CheckCostumePartsIsCompositeWear");
		
		UFLIB_UiCostume_C_CheckCostumePartsIsCompositeWear_Params params {};
		params.InCostumePartsName = InCostumePartsName;
		params.InCostumePartsCategory = InCostumePartsCategory;
		params.InCharacterGender = InCharacterGender;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsCompositeWear != nullptr)
			*OutIsCompositeWear = params.OutIsCompositeWear;
		if (OutOccupiedPartsLocations != nullptr)
			*OutOccupiedPartsLocations = params.OutOccupiedPartsLocations;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFLIB_UiCostume_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFLIB_UiCostume_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FLIB_UiCostume.FLIB_UiCostume_C");
		return ptr;
	}

}


