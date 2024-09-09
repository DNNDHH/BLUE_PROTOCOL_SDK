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
	 * 		Name   -> Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.OnLoaded_E37A97DE401D23101CB622A989A36F64
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_CommonIcon_C::OnLoaded_E37A97DE401D23101CB622A989A36F64(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.OnLoaded_E37A97DE401D23101CB622A989A36F64");
		
		UFlatShop_CommonIcon_C_OnLoaded_E37A97DE401D23101CB622A989A36F64_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBProductData                              ProductData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            TextureId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBRmShopMenuType                                  RmShopType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_CommonIcon_C::SetIcon(const struct FSBProductData& ProductData, int32_t TextureId, ESBRmShopMenuType RmShopType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetIcon");
		
		UFlatShop_CommonIcon_C_SetIcon_Params params {};
		params.ProductData = ProductData;
		params.TextureId = TextureId;
		params.RmShopType = RmShopType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SwitchRewardType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_CommonIcon_C::SwitchRewardType(ESBRewardItemType ItemType, int32_t ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SwitchRewardType");
		
		UFlatShop_CommonIcon_C_SwitchRewardType_Params params {};
		params.ItemType = ItemType;
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.LoadTexture_Nodata
	 * 		Flags  -> ()
	 */
	void UFlatShop_CommonIcon_C::LoadTexture_Nodata()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.LoadTexture_Nodata");
		
		UFlatShop_CommonIcon_C_LoadTexture_Nodata_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetItems
	 * 		Flags  -> ()
	 */
	void UFlatShop_CommonIcon_C::SetItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetItems");
		
		UFlatShop_CommonIcon_C_SetItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetCostume
	 * 		Flags  -> ()
	 */
	void UFlatShop_CommonIcon_C::SetCostume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetCostume");
		
		UFlatShop_CommonIcon_C_SetCostume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetReward
	 * 		Flags  -> ()
	 */
	void UFlatShop_CommonIcon_C::SetReward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetReward");
		
		UFlatShop_CommonIcon_C_SetReward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetEmotion
	 * 		Flags  -> ()
	 */
	void UFlatShop_CommonIcon_C::SetEmotion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetEmotion");
		
		UFlatShop_CommonIcon_C_SetEmotion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetStamps
	 * 		Flags  -> ()
	 */
	void UFlatShop_CommonIcon_C::SetStamps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetStamps");
		
		UFlatShop_CommonIcon_C_SetStamps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetToken
	 * 		Flags  -> ()
	 */
	void UFlatShop_CommonIcon_C::SetToken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetToken");
		
		UFlatShop_CommonIcon_C_SetToken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetStampSet
	 * 		Flags  -> ()
	 */
	void UFlatShop_CommonIcon_C::SetStampSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetStampSet");
		
		UFlatShop_CommonIcon_C_SetStampSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetTAbility
	 * 		Flags  -> ()
	 */
	void UFlatShop_CommonIcon_C::SetTAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetTAbility");
		
		UFlatShop_CommonIcon_C_SetTAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetRealGoods
	 * 		Flags  -> ()
	 */
	void UFlatShop_CommonIcon_C::SetRealGoods()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetRealGoods");
		
		UFlatShop_CommonIcon_C_SetRealGoods_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetAdvParts
	 * 		Flags  -> ()
	 */
	void UFlatShop_CommonIcon_C::SetAdvParts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetAdvParts");
		
		UFlatShop_CommonIcon_C_SetAdvParts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetOrnament
	 * 		Flags  -> ()
	 */
	void UFlatShop_CommonIcon_C::SetOrnament()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetOrnament");
		
		UFlatShop_CommonIcon_C_SetOrnament_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SwitchRewardTypeByProductData
	 * 		Flags  -> ()
	 */
	void UFlatShop_CommonIcon_C::SwitchRewardTypeByProductData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SwitchRewardTypeByProductData");
		
		UFlatShop_CommonIcon_C_SwitchRewardTypeByProductData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetDataBySeasonPass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RewardId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        TextureId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_CommonIcon_C::SetDataBySeasonPass(const class FName& RewardId, const class FName& TextureId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetDataBySeasonPass");
		
		UFlatShop_CommonIcon_C_SetDataBySeasonPass_Params params {};
		params.RewardId = RewardId;
		params.TextureId = TextureId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.LoadTexture
	 * 		Flags  -> ()
	 */
	void UFlatShop_CommonIcon_C::LoadTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.LoadTexture");
		
		UFlatShop_CommonIcon_C_LoadTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.ExecuteUbergraph_FlatShop_CommonIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_CommonIcon_C::ExecuteUbergraph_FlatShop_CommonIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.ExecuteUbergraph_FlatShop_CommonIcon");
		
		UFlatShop_CommonIcon_C_ExecuteUbergraph_FlatShop_CommonIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlatShop_CommonIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlatShop_CommonIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FlatShop_CommonIcon.FlatShop_CommonIcon_C");
		return ptr;
	}

}


