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
	 * 		Name   -> Function FlatShop_Product_L.FlatShop_Product_L_C.SetRibbon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Flag                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_Product_L_C::SetRibbon(int32_t Flag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Product_L.FlatShop_Product_L_C.SetRibbon");
		
		UFlatShop_Product_L_C_SetRibbon_Params params {};
		params.Flag = Flag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Product_L.FlatShop_Product_L_C.Get Thumbnail Texture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_Product_L_C::GetThumbnailTexture(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Product_L.FlatShop_Product_L_C.Get Thumbnail Texture");
		
		UFlatShop_Product_L_C_GetThumbnailTexture_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Product_L.FlatShop_Product_L_C.SetProductThumbnail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFlatShop_Product_L_C::SetProductThumbnail(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Product_L.FlatShop_Product_L_C.SetProductThumbnail");
		
		UFlatShop_Product_L_C_SetProductThumbnail_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Product_L.FlatShop_Product_L_C.SetFlag_RoPS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Flags                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFlatShop_Product_L_C::SetFlag_RoPS(const class FString& Flags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Product_L.FlatShop_Product_L_C.SetFlag_RoPS");
		
		UFlatShop_Product_L_C_SetFlag_RoPS_Params params {};
		params.Flags = Flags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Product_L.FlatShop_Product_L_C.SetText_LimitDate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDateTime                                   LimitDate                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_Product_L_C::SetText_LimitDate(const struct FDateTime& LimitDate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Product_L.FlatShop_Product_L_C.SetText_LimitDate");
		
		UFlatShop_Product_L_C_SetText_LimitDate_Params params {};
		params.LimitDate = LimitDate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Product_L.FlatShop_Product_L_C.OnFail_0A62FBD840A02077625644ABD1C58C54
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_Product_L_C::OnFail_0A62FBD840A02077625644ABD1C58C54(class UTexture2DDynamic* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Product_L.FlatShop_Product_L_C.OnFail_0A62FBD840A02077625644ABD1C58C54");
		
		UFlatShop_Product_L_C_OnFail_0A62FBD840A02077625644ABD1C58C54_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Product_L.FlatShop_Product_L_C.OnSuccess_0A62FBD840A02077625644ABD1C58C54
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_Product_L_C::OnSuccess_0A62FBD840A02077625644ABD1C58C54(class UTexture2DDynamic* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Product_L.FlatShop_Product_L_C.OnSuccess_0A62FBD840A02077625644ABD1C58C54");
		
		UFlatShop_Product_L_C_OnSuccess_0A62FBD840A02077625644ABD1C58C54_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Product_L.FlatShop_Product_L_C.OnLoaded_C1943EA54AEEFAC24C82819C900D7109
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_Product_L_C::OnLoaded_C1943EA54AEEFAC24C82819C900D7109(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Product_L.FlatShop_Product_L_C.OnLoaded_C1943EA54AEEFAC24C82819C900D7109");
		
		UFlatShop_Product_L_C_OnLoaded_C1943EA54AEEFAC24C82819C900D7109_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Product_L.FlatShop_Product_L_C.SetProductData_RoPS_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBRoseOrbShopItemMasterData                ProductData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_Product_L_C::SetProductData_RoPS_Event(const struct FSBRoseOrbShopItemMasterData& ProductData, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Product_L.FlatShop_Product_L_C.SetProductData_RoPS_Event");
		
		UFlatShop_Product_L_C_SetProductData_RoPS_Event_Params params {};
		params.ProductData = ProductData;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Product_L.FlatShop_Product_L_C.BndEvt__Btn_Item_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFlatShop_Product_L_C::BndEvt__Btn_Item_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Product_L.FlatShop_Product_L_C.BndEvt__Btn_Item_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UFlatShop_Product_L_C_BndEvt__Btn_Item_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Product_L.FlatShop_Product_L_C.DownLoadImage_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFlatShop_Product_L_C::DownLoadImage_Event(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Product_L.FlatShop_Product_L_C.DownLoadImage_Event");
		
		UFlatShop_Product_L_C_DownLoadImage_Event_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Product_L.FlatShop_Product_L_C.LoadTexture
	 * 		Flags  -> ()
	 */
	void UFlatShop_Product_L_C::LoadTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Product_L.FlatShop_Product_L_C.LoadTexture");
		
		UFlatShop_Product_L_C_LoadTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Product_L.FlatShop_Product_L_C.ExecuteUbergraph_FlatShop_Product_L
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_Product_L_C::ExecuteUbergraph_FlatShop_Product_L(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Product_L.FlatShop_Product_L_C.ExecuteUbergraph_FlatShop_Product_L");
		
		UFlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Product_L.FlatShop_Product_L_C.OnClickedIndex__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_Product_L_C::OnClickedIndex__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Product_L.FlatShop_Product_L_C.OnClickedIndex__DelegateSignature");
		
		UFlatShop_Product_L_C_OnClickedIndex__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlatShop_Product_L_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlatShop_Product_L_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FlatShop_Product_L.FlatShop_Product_L_C");
		return ptr;
	}

}


