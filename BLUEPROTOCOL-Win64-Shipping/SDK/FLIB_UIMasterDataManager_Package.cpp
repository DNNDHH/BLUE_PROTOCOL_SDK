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
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.GetMasterImaginePerkPickTableListByImagineParamType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ImagineParamType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsExist                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMasterImaginePerkPickTable>         NewParam                                                   (Parm, OutParm)
	 */
	void UFLIB_UIMasterDataManager_C::GetMasterImaginePerkPickTableListByImagineParamType(const class FString& ImagineParamType, class UObject* __WorldContext, bool* bIsExist, TArray<struct FMasterImaginePerkPickTable>* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.GetMasterImaginePerkPickTableListByImagineParamType");
		
		UFLIB_UIMasterDataManager_C_GetMasterImaginePerkPickTableListByImagineParamType_Params params {};
		params.ImagineParamType = ImagineParamType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsExist != nullptr)
			*bIsExist = params.bIsExist;
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.GetMasterImaginePerkPickTableListByImagineMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            ImagineMaster                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsExist                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMasterImaginePerkPickTable>         NewParam                                                   (Parm, OutParm)
	 */
	void UFLIB_UIMasterDataManager_C::GetMasterImaginePerkPickTableListByImagineMaster(const struct FSBMasterImagine& ImagineMaster, class UObject* __WorldContext, bool* bIsExist, TArray<struct FMasterImaginePerkPickTable>* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.GetMasterImaginePerkPickTableListByImagineMaster");
		
		UFLIB_UIMasterDataManager_C_GetMasterImaginePerkPickTableListByImagineMaster_Params params {};
		params.ImagineMaster = ImagineMaster;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsExist != nullptr)
			*bIsExist = params.bIsExist;
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindStampMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StampId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBStampMasterData                          StampMaster                                                (Parm, OutParm)
	 */
	void UFLIB_UIMasterDataManager_C::FindStampMaster(int32_t StampId, class UObject* __WorldContext, bool* bIsValid, struct FSBStampMasterData* StampMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindStampMaster");
		
		UFLIB_UIMasterDataManager_C_FindStampMaster_Params params {};
		params.StampId = StampId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
		if (StampMaster != nullptr)
			*StampMaster = params.StampMaster;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAwardsMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FSBMasterAwardsData UFLIB_UIMasterDataManager_C::FindAwardsMaster(int32_t Index, class UObject* __WorldContext, bool* bIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAwardsMaster");
		
		UFLIB_UIMasterDataManager_C_FindAwardsMaster_Params params {};
		params.Index = Index;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAdventureCardDecorationMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FSBMasterAdventureCardDecoration UFLIB_UIMasterDataManager_C::FindAdventureCardDecorationMaster(int32_t Index, class UObject* __WorldContext, bool* bIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAdventureCardDecorationMaster");
		
		UFLIB_UIMasterDataManager_C_FindAdventureCardDecorationMaster_Params params {};
		params.Index = Index;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindShopItemSetMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBFlatShopItemSetMasterData                ShopItemSetMaster                                          (Parm, OutParm, NoDestructor)
	 */
	void UFLIB_UIMasterDataManager_C::FindShopItemSetMaster(int32_t Index, class UObject* __WorldContext, bool* bIsValid, struct FSBFlatShopItemSetMasterData* ShopItemSetMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindShopItemSetMaster");
		
		UFLIB_UIMasterDataManager_C_FindShopItemSetMaster_Params params {};
		params.Index = Index;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
		if (ShopItemSetMaster != nullptr)
			*ShopItemSetMaster = params.ShopItemSetMaster;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.GetItemMasterItemIdListFromEfficacyType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemEfficacyType                                  InEfficacyType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<int32_t>                                    OutItemIdList                                              (Parm, OutParm)
	 */
	void UFLIB_UIMasterDataManager_C::GetItemMasterItemIdListFromEfficacyType(EItemEfficacyType InEfficacyType, class UObject* __WorldContext, bool* IsValid, TArray<int32_t>* OutItemIdList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.GetItemMasterItemIdListFromEfficacyType");
		
		UFLIB_UIMasterDataManager_C_GetItemMasterItemIdListFromEfficacyType_Params params {};
		params.InEfficacyType = InEfficacyType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (OutItemIdList != nullptr)
			*OutItemIdList = params.OutItemIdList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAdventureBoardMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBAdventureBoardParamMasterData            AdventureBoardMaster                                       (ConstParm, Parm, OutParm)
	 */
	void UFLIB_UIMasterDataManager_C::FindAdventureBoardMaster(int32_t ID, class UObject* __WorldContext, bool* bIsValid, const struct FSBAdventureBoardParamMasterData& AdventureBoardMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAdventureBoardMaster");
		
		UFLIB_UIMasterDataManager_C_FindAdventureBoardMaster_Params params {};
		params.ID = ID;
		params.__WorldContext = __WorldContext;
		params.AdventureBoardMaster = AdventureBoardMaster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindRecipeSetMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRecipeSetMasterData                        RecipeSetMaster                                            (ConstParm, Parm, OutParm)
	 */
	void UFLIB_UIMasterDataManager_C::FindRecipeSetMaster(int32_t Index, class UObject* __WorldContext, bool* bIsValid, const struct FRecipeSetMasterData& RecipeSetMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindRecipeSetMaster");
		
		UFLIB_UIMasterDataManager_C_FindRecipeSetMaster_Params params {};
		params.Index = Index;
		params.__WorldContext = __WorldContext;
		params.RecipeSetMaster = RecipeSetMaster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindRealGoodsMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBEventShopRealGoodsMasterData             RealGoodsMaster                                            (Parm, OutParm, NoDestructor)
	 */
	void UFLIB_UIMasterDataManager_C::FindRealGoodsMaster(int32_t Index, class UObject* __WorldContext, bool* bIsValid, struct FSBEventShopRealGoodsMasterData* RealGoodsMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindRealGoodsMaster");
		
		UFLIB_UIMasterDataManager_C_FindRealGoodsMaster_Params params {};
		params.Index = Index;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
		if (RealGoodsMaster != nullptr)
			*RealGoodsMaster = params.RealGoodsMaster;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAestheCharaPartsMasterByAssetId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InAssetId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBAestheShopPartsMasterData                OutData                                                    (Parm, OutParm)
	 */
	void UFLIB_UIMasterDataManager_C::FindAestheCharaPartsMasterByAssetId(const class FString& InAssetId, class UObject* __WorldContext, bool* bIsValid, struct FSBAestheShopPartsMasterData* OutData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAestheCharaPartsMasterByAssetId");
		
		UFLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByAssetId_Params params {};
		params.InAssetId = InAssetId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
		if (OutData != nullptr)
			*OutData = params.OutData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAestheCharaPartsMasterByIconId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InIconId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBAestheShopPartsMasterData                OutData                                                    (Parm, OutParm)
	 */
	void UFLIB_UIMasterDataManager_C::FindAestheCharaPartsMasterByIconId(const class FString& InIconId, class UObject* __WorldContext, bool* bIsValid, struct FSBAestheShopPartsMasterData* OutData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAestheCharaPartsMasterByIconId");
		
		UFLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByIconId_Params params {};
		params.InIconId = InIconId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
		if (OutData != nullptr)
			*OutData = params.OutData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAestheShopCharaParamRestrictionMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBAestheShopCharaParamRestrictionMasterData OutData                                                    (Parm, OutParm)
	 */
	void UFLIB_UIMasterDataManager_C::FindAestheShopCharaParamRestrictionMaster(const class FString& InId, class UObject* __WorldContext, bool* bIsValid, struct FSBAestheShopCharaParamRestrictionMasterData* OutData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAestheShopCharaParamRestrictionMaster");
		
		UFLIB_UIMasterDataManager_C_FindAestheShopCharaParamRestrictionMaster_Params params {};
		params.InId = InId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
		if (OutData != nullptr)
			*OutData = params.OutData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.GetDateChangeTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDateTime                                   DateChangeTime                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UFLIB_UIMasterDataManager_C::GetDateChangeTime(class UObject* __WorldContext, struct FDateTime* DateChangeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.GetDateChangeTime");
		
		UFLIB_UIMasterDataManager_C_GetDateChangeTime_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DateChangeTime != nullptr)
			*DateChangeTime = params.DateChangeTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindRewardMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RewardId                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBMasterReward                             RewardMaster                                               (Parm, OutParm, NoDestructor)
	 */
	void UFLIB_UIMasterDataManager_C::FindRewardMaster(const class FName& RewardId, class UObject* __WorldContext, bool* IsValid, struct FSBMasterReward* RewardMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindRewardMaster");
		
		UFLIB_UIMasterDataManager_C_FindRewardMaster_Params params {};
		params.RewardId = RewardId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (RewardMaster != nullptr)
			*RewardMaster = params.RewardMaster;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindFusionItemMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBMasterFusionItem                         OutFusionItemMaster                                        (Parm, OutParm, NoDestructor)
	 */
	void UFLIB_UIMasterDataManager_C::FindFusionItemMaster(int32_t InId, class UObject* __WorldContext, bool* IsValid, struct FSBMasterFusionItem* OutFusionItemMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindFusionItemMaster");
		
		UFLIB_UIMasterDataManager_C_FindFusionItemMaster_Params params {};
		params.InId = InId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (OutFusionItemMaster != nullptr)
			*OutFusionItemMaster = params.OutFusionItemMaster;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAbilityEffectMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBAbilityEffectMasterData                  AbilityEffectMaster                                        (Parm, OutParm, NoDestructor)
	 */
	void UFLIB_UIMasterDataManager_C::FindAbilityEffectMaster(int32_t InId, class UObject* __WorldContext, bool* bIsValid, struct FSBAbilityEffectMasterData* AbilityEffectMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAbilityEffectMaster");
		
		UFLIB_UIMasterDataManager_C_FindAbilityEffectMaster_Params params {};
		params.InId = InId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
		if (AbilityEffectMaster != nullptr)
			*AbilityEffectMaster = params.AbilityEffectMaster;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAbilityMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBAbilityMasterData                        AbilityMaster                                              (Parm, OutParm)
	 */
	void UFLIB_UIMasterDataManager_C::FindAbilityMaster(int32_t InId, class UObject* __WorldContext, bool* bIsValid, struct FSBAbilityMasterData* AbilityMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAbilityMaster");
		
		UFLIB_UIMasterDataManager_C_FindAbilityMaster_Params params {};
		params.InId = InId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
		if (AbilityMaster != nullptr)
			*AbilityMaster = params.AbilityMaster;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.Find Lottery Reward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LotteryGroupsId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemIndex                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBMasterRewardLotteryGroupsRewards         LotteryReward                                              (Parm, OutParm, NoDestructor)
	 */
	void UFLIB_UIMasterDataManager_C::FindLotteryReward(int32_t LotteryGroupsId, int32_t ItemIndex, class UObject* __WorldContext, bool* bIsValid, struct FSBMasterRewardLotteryGroupsRewards* LotteryReward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.Find Lottery Reward");
		
		UFLIB_UIMasterDataManager_C_FindLotteryReward_Params params {};
		params.LotteryGroupsId = LotteryGroupsId;
		params.ItemIndex = ItemIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
		if (LotteryReward != nullptr)
			*LotteryReward = params.LotteryReward;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindRewardLotteryGroupsMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBMasterRewardLotteryGroups                RewardLotteryGroupsMaster                                  (ConstParm, Parm, OutParm)
	 */
	void UFLIB_UIMasterDataManager_C::FindRewardLotteryGroupsMaster(int32_t ID, class UObject* __WorldContext, bool* bIsValid, const struct FSBMasterRewardLotteryGroups& RewardLotteryGroupsMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindRewardLotteryGroupsMaster");
		
		UFLIB_UIMasterDataManager_C_FindRewardLotteryGroupsMaster_Params params {};
		params.ID = ID;
		params.__WorldContext = __WorldContext;
		params.RewardLotteryGroupsMaster = RewardLotteryGroupsMaster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.GetSkillLevelFromClassLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InClassLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OutSkillLevel                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFLIB_UIMasterDataManager_C::GetSkillLevelFromClassLevel(int32_t InSkillId, int32_t InClassLevel, class UObject* __WorldContext, bool* bIsValid, int32_t* OutSkillLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.GetSkillLevelFromClassLevel");
		
		UFLIB_UIMasterDataManager_C_GetSkillLevelFromClassLevel_Params params {};
		params.InSkillId = InSkillId;
		params.InClassLevel = InClassLevel;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
		if (OutSkillLevel != nullptr)
			*OutSkillLevel = params.OutSkillLevel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.GetSkillLevelMax
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OutSkillLevelMax                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFLIB_UIMasterDataManager_C::GetSkillLevelMax(int32_t InSkillId, class UObject* __WorldContext, bool* bIsValid, int32_t* OutSkillLevelMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.GetSkillLevelMax");
		
		UFLIB_UIMasterDataManager_C_GetSkillLevelMax_Params params {};
		params.InSkillId = InSkillId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
		if (OutSkillLevelMax != nullptr)
			*OutSkillLevelMax = params.OutSkillLevelMax;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindSkillMasteryParam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBSkillMasteryParam                        OutSkillMasteryParam                                       (Parm, OutParm, NoDestructor)
	 */
	void UFLIB_UIMasterDataManager_C::FindSkillMasteryParam(int32_t InSkillId, int32_t InLevel, class UObject* __WorldContext, bool* bIsValid, struct FSBSkillMasteryParam* OutSkillMasteryParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindSkillMasteryParam");
		
		UFLIB_UIMasterDataManager_C_FindSkillMasteryParam_Params params {};
		params.InSkillId = InSkillId;
		params.InLevel = InLevel;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
		if (OutSkillMasteryParam != nullptr)
			*OutSkillMasteryParam = params.OutSkillMasteryParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindSkillDataMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SkillId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBSkillDataMasterData                      SkillDataMaster                                            (Parm, OutParm)
	 */
	void UFLIB_UIMasterDataManager_C::FindSkillDataMaster(int32_t SkillId, class UObject* __WorldContext, bool* bIsValid, struct FSBSkillDataMasterData* SkillDataMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindSkillDataMaster");
		
		UFLIB_UIMasterDataManager_C_FindSkillDataMaster_Params params {};
		params.SkillId = SkillId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
		if (SkillDataMaster != nullptr)
			*SkillDataMaster = params.SkillDataMaster;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindWarehouseAbilityRecipeMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBWarehouseAbilityRecipeMasterData         WarehouseAbilityRecipeMaster                               (ConstParm, Parm, OutParm, NoDestructor)
	 */
	void UFLIB_UIMasterDataManager_C::FindWarehouseAbilityRecipeMaster(int32_t ID, class UObject* __WorldContext, bool* bIsValid, const struct FSBWarehouseAbilityRecipeMasterData& WarehouseAbilityRecipeMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindWarehouseAbilityRecipeMaster");
		
		UFLIB_UIMasterDataManager_C_FindWarehouseAbilityRecipeMaster_Params params {};
		params.ID = ID;
		params.__WorldContext = __WorldContext;
		params.WarehouseAbilityRecipeMaster = WarehouseAbilityRecipeMaster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindProductImagineByMaterialItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBMasterImagine                            ImagineMaster                                              (Parm, OutParm)
	 */
	void UFLIB_UIMasterDataManager_C::FindProductImagineByMaterialItem(int32_t ItemId, class UObject* __WorldContext, bool* bIsValid, struct FSBMasterImagine* ImagineMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindProductImagineByMaterialItem");
		
		UFLIB_UIMasterDataManager_C_FindProductImagineByMaterialItem_Params params {};
		params.ItemId = ItemId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
		if (ImagineMaster != nullptr)
			*ImagineMaster = params.ImagineMaster;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindImagineRecipeByMaterialItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FMasterImagineRecepi                        ImagineRecipeMaster                                        (Parm, OutParm)
	 */
	void UFLIB_UIMasterDataManager_C::FindImagineRecipeByMaterialItem(int32_t ItemId, class UObject* __WorldContext, bool* bIsValid, struct FMasterImagineRecepi* ImagineRecipeMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindImagineRecipeByMaterialItem");
		
		UFLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem_Params params {};
		params.ItemId = ItemId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
		if (ImagineRecipeMaster != nullptr)
			*ImagineRecipeMaster = params.ImagineRecipeMaster;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindImagineRecipeMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ImagineId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FMasterImagineRecepi                        ImagineRecipeMaster                                        (ConstParm, Parm, OutParm)
	 */
	void UFLIB_UIMasterDataManager_C::FindImagineRecipeMaster(int32_t ImagineId, class UObject* __WorldContext, bool* bIsValid, const struct FMasterImagineRecepi& ImagineRecipeMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindImagineRecipeMaster");
		
		UFLIB_UIMasterDataManager_C_FindImagineRecipeMaster_Params params {};
		params.ImagineId = ImagineId;
		params.__WorldContext = __WorldContext;
		params.ImagineRecipeMaster = ImagineRecipeMaster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindStampCategoryMasterByStampId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StampId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBStampCategoryMasterData                  StampCategoryMaster                                        (ConstParm, Parm, OutParm)
	 */
	void UFLIB_UIMasterDataManager_C::FindStampCategoryMasterByStampId(int32_t StampId, class UObject* __WorldContext, bool* bIsValid, const struct FSBStampCategoryMasterData& StampCategoryMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindStampCategoryMasterByStampId");
		
		UFLIB_UIMasterDataManager_C_FindStampCategoryMasterByStampId_Params params {};
		params.StampId = StampId;
		params.__WorldContext = __WorldContext;
		params.StampCategoryMaster = StampCategoryMaster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindStampCategoryMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CategoryId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBStampCategoryMasterData                  StampCategoryMaster                                        (ConstParm, Parm, OutParm)
	 */
	void UFLIB_UIMasterDataManager_C::FindStampCategoryMaster(int32_t CategoryId, class UObject* __WorldContext, bool* bIsValid, const struct FSBStampCategoryMasterData& StampCategoryMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindStampCategoryMaster");
		
		UFLIB_UIMasterDataManager_C_FindStampCategoryMaster_Params params {};
		params.CategoryId = CategoryId;
		params.__WorldContext = __WorldContext;
		params.StampCategoryMaster = StampCategoryMaster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindEmoteMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EmoteId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBEmoteMasterData                          EmoteMaster                                                (ConstParm, Parm, OutParm)
	 */
	void UFLIB_UIMasterDataManager_C::FindEmoteMaster(int32_t EmoteId, class UObject* __WorldContext, bool* bIsValid, const struct FSBEmoteMasterData& EmoteMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindEmoteMaster");
		
		UFLIB_UIMasterDataManager_C_FindEmoteMaster_Params params {};
		params.EmoteId = EmoteId;
		params.__WorldContext = __WorldContext;
		params.EmoteMaster = EmoteMaster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindOrnamentMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FSBMasterOrnament UFLIB_UIMasterDataManager_C::FindOrnamentMaster(int32_t ID, class UObject* __WorldContext, bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindOrnamentMaster");
		
		UFLIB_UIMasterDataManager_C_FindOrnamentMaster_Params params {};
		params.ID = ID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAchievementMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FAchievementMasterData                      AchievementMaster                                          (ConstParm, Parm, OutParm)
	 */
	void UFLIB_UIMasterDataManager_C::FindAchievementMaster(int32_t Index, class UObject* __WorldContext, bool* bIsValid, const struct FAchievementMasterData& AchievementMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAchievementMaster");
		
		UFLIB_UIMasterDataManager_C_FindAchievementMaster_Params params {};
		params.Index = Index;
		params.__WorldContext = __WorldContext;
		params.AchievementMaster = AchievementMaster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindTokenMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTokenId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FMasterToken                                TokenMaster                                                (ConstParm, Parm, OutParm)
	 */
	void UFLIB_UIMasterDataManager_C::FindTokenMaster(int32_t InTokenId, class UObject* __WorldContext, bool* bIsValid, const struct FMasterToken& TokenMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindTokenMaster");
		
		UFLIB_UIMasterDataManager_C_FindTokenMaster_Params params {};
		params.InTokenId = InTokenId;
		params.__WorldContext = __WorldContext;
		params.TokenMaster = TokenMaster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindCraftMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RecepiId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FCraftMasterData                            CraftMaster                                                (ConstParm, Parm, OutParm)
	 */
	void UFLIB_UIMasterDataManager_C::FindCraftMaster(int32_t RecepiId, class UObject* __WorldContext, bool* bIsValid, const struct FCraftMasterData& CraftMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindCraftMaster");
		
		UFLIB_UIMasterDataManager_C_FindCraftMaster_Params params {};
		params.RecepiId = RecepiId;
		params.__WorldContext = __WorldContext;
		params.CraftMaster = CraftMaster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindMountImagineMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBMasterMountImagine                       MountImagineMaster                                         (Parm, OutParm)
	 */
	void UFLIB_UIMasterDataManager_C::FindMountImagineMaster(int32_t ItemIndex, class UObject* __WorldContext, bool* bIsValid, struct FSBMasterMountImagine* MountImagineMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindMountImagineMaster");
		
		UFLIB_UIMasterDataManager_C_FindMountImagineMaster_Params params {};
		params.ItemIndex = ItemIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
		if (MountImagineMaster != nullptr)
			*MountImagineMaster = params.MountImagineMaster;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindImagineMasterByRewardData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  RewardType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBMasterImagine                            ImagineMaster                                              (Parm, OutParm)
	 */
	void UFLIB_UIMasterDataManager_C::FindImagineMasterByRewardData(ESBRewardItemType RewardType, int32_t ItemIndex, class UObject* __WorldContext, bool* bIsValid, struct FSBMasterImagine* ImagineMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindImagineMasterByRewardData");
		
		UFLIB_UIMasterDataManager_C_FindImagineMasterByRewardData_Params params {};
		params.RewardType = RewardType;
		params.ItemIndex = ItemIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
		if (ImagineMaster != nullptr)
			*ImagineMaster = params.ImagineMaster;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindImagineMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBMasterImagine                            ImagineMaster                                              (Parm, OutParm)
	 */
	void UFLIB_UIMasterDataManager_C::FindImagineMaster(int32_t ItemIndex, class UObject* __WorldContext, bool* bIsValid, struct FSBMasterImagine* ImagineMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindImagineMaster");
		
		UFLIB_UIMasterDataManager_C_FindImagineMaster_Params params {};
		params.ItemIndex = ItemIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
		if (ImagineMaster != nullptr)
			*ImagineMaster = params.ImagineMaster;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindWeaponMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBWeaponMasterData                         WeaponMaster                                               (Parm, OutParm)
	 */
	void UFLIB_UIMasterDataManager_C::FindWeaponMaster(int32_t ItemIndex, class UObject* __WorldContext, bool* bIsValid, struct FSBWeaponMasterData* WeaponMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindWeaponMaster");
		
		UFLIB_UIMasterDataManager_C_FindWeaponMaster_Params params {};
		params.ItemIndex = ItemIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
		if (WeaponMaster != nullptr)
			*WeaponMaster = params.WeaponMaster;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindCostumeMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBMasterCostume                            CostumeMaster                                              (Parm, OutParm)
	 */
	void UFLIB_UIMasterDataManager_C::FindCostumeMaster(int32_t ItemIndex, class UObject* __WorldContext, bool* bIsValid, struct FSBMasterCostume* CostumeMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindCostumeMaster");
		
		UFLIB_UIMasterDataManager_C_FindCostumeMaster_Params params {};
		params.ItemIndex = ItemIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
		if (CostumeMaster != nullptr)
			*CostumeMaster = params.CostumeMaster;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindItemMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FItemMasterData                             ItemMaster                                                 (Parm, OutParm)
	 */
	void UFLIB_UIMasterDataManager_C::FindItemMaster(int32_t ItemIndex, class UObject* __WorldContext, bool* bIsValid, struct FItemMasterData* ItemMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindItemMaster");
		
		UFLIB_UIMasterDataManager_C_FindItemMaster_Params params {};
		params.ItemIndex = ItemIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
		if (ItemMaster != nullptr)
			*ItemMaster = params.ItemMaster;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindItemBoxMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBMasterItemBox                            ItemBoxMaster                                              (Parm, OutParm)
	 */
	void UFLIB_UIMasterDataManager_C::FindItemBoxMaster(int32_t ItemIndex, class UObject* __WorldContext, bool* bIsValid, struct FSBMasterItemBox* ItemBoxMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindItemBoxMaster");
		
		UFLIB_UIMasterDataManager_C_FindItemBoxMaster_Params params {};
		params.ItemIndex = ItemIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
		if (ItemBoxMaster != nullptr)
			*ItemBoxMaster = params.ItemBoxMaster;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFLIB_UIMasterDataManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFLIB_UIMasterDataManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C");
		return ptr;
	}

}


