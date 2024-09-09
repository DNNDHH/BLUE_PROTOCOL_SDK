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
	 * 		Name   -> Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.SetupBonusIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BounsId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_ProductDetail_C::SetupBonusIcon(int32_t BounsId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.SetupBonusIcon");
		
		UFlatShop_ProductDetail_C_SetupBonusIcon_Params params {};
		params.BounsId = BounsId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.Get ThumbnailTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_ProductDetail_C::GetThumbnailTexture(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.Get ThumbnailTexture");
		
		UFlatShop_ProductDetail_C_GetThumbnailTexture_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.OnLoaded_40E58A5D468CF66B4BD22F87CCA1810D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_ProductDetail_C::OnLoaded_40E58A5D468CF66B4BD22F87CCA1810D(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.OnLoaded_40E58A5D468CF66B4BD22F87CCA1810D");
		
		UFlatShop_ProductDetail_C_OnLoaded_40E58A5D468CF66B4BD22F87CCA1810D_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.OnFail_48D4A76A494FBE239EF1AD90CEDE58B4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_ProductDetail_C::OnFail_48D4A76A494FBE239EF1AD90CEDE58B4(class UTexture2DDynamic* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.OnFail_48D4A76A494FBE239EF1AD90CEDE58B4");
		
		UFlatShop_ProductDetail_C_OnFail_48D4A76A494FBE239EF1AD90CEDE58B4_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.OnSuccess_48D4A76A494FBE239EF1AD90CEDE58B4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_ProductDetail_C::OnSuccess_48D4A76A494FBE239EF1AD90CEDE58B4(class UTexture2DDynamic* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.OnSuccess_48D4A76A494FBE239EF1AD90CEDE58B4");
		
		UFlatShop_ProductDetail_C_OnSuccess_48D4A76A494FBE239EF1AD90CEDE58B4_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.SetProductData_RoPS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBRoseOrbShopItemMasterData                ProductData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UFlatShop_ProductDetail_C::SetProductData_RoPS(const struct FSBRoseOrbShopItemMasterData& ProductData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.SetProductData_RoPS");
		
		UFlatShop_ProductDetail_C_SetProductData_RoPS_Params params {};
		params.ProductData = ProductData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.SetFlags_ROS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Ribbon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_ProductDetail_C::SetFlags_ROS(int32_t Ribbon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.SetFlags_ROS");
		
		UFlatShop_ProductDetail_C_SetFlags_ROS_Params params {};
		params.Ribbon = Ribbon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.LoadImageName_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_ProductDetail_C::LoadImageName_Event(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.LoadImageName_Event");
		
		UFlatShop_ProductDetail_C_LoadImageName_Event_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.LoadImageSoftRef_Event
	 * 		Flags  -> ()
	 */
	void UFlatShop_ProductDetail_C::LoadImageSoftRef_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.LoadImageSoftRef_Event");
		
		UFlatShop_ProductDetail_C_LoadImageSoftRef_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.DownLoadImage_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFlatShop_ProductDetail_C::DownLoadImage_Event(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.DownLoadImage_Event");
		
		UFlatShop_ProductDetail_C_DownLoadImage_Event_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.BndEvt__FlatShop_ProductDetail_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommonIcon_C*                               Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_ProductDetail_C::BndEvt__FlatShop_ProductDetail_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(class UCommonIcon_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.BndEvt__FlatShop_ProductDetail_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
		
		UFlatShop_ProductDetail_C_BndEvt__FlatShop_ProductDetail_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.Destruct
	 * 		Flags  -> ()
	 */
	void UFlatShop_ProductDetail_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.Destruct");
		
		UFlatShop_ProductDetail_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.OnClose_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_ProductDetailMenu_C*                    Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_ProductDetail_C::OnClose_Event(class UUMG_ProductDetailMenu_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.OnClose_Event");
		
		UFlatShop_ProductDetail_C_OnClose_Event_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.Construct
	 * 		Flags  -> ()
	 */
	void UFlatShop_ProductDetail_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.Construct");
		
		UFlatShop_ProductDetail_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.ExecuteUbergraph_FlatShop_ProductDetail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_ProductDetail_C::ExecuteUbergraph_FlatShop_ProductDetail(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.ExecuteUbergraph_FlatShop_ProductDetail");
		
		UFlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFlatShop_ProductDetail_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.OnClose__DelegateSignature");
		
		UFlatShop_ProductDetail_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlatShop_ProductDetail_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlatShop_ProductDetail_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FlatShop_ProductDetail.FlatShop_ProductDetail_C");
		return ptr;
	}

}


