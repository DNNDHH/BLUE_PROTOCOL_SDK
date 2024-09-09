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
	 * 		Name   -> Function WBP_NaEventBanner.WBP_NaEventBanner_C.GetBannerTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventBanner_C::GetBannerTexture(const class FName& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventBanner.WBP_NaEventBanner_C.GetBannerTexture");
		
		UWBP_NaEventBanner_C_GetBannerTexture_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventBanner.WBP_NaEventBanner_C.OnLoaded_64FD5F4D481E2790866B238F3E237347
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventBanner_C::OnLoaded_64FD5F4D481E2790866B238F3E237347(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventBanner.WBP_NaEventBanner_C.OnLoaded_64FD5F4D481E2790866B238F3E237347");
		
		UWBP_NaEventBanner_C_OnLoaded_64FD5F4D481E2790866B238F3E237347_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventBanner.WBP_NaEventBanner_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        BannerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        UploadId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventBanner_C::SetData(const class FName& BannerId, const class FName& UploadId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventBanner.WBP_NaEventBanner_C.SetData");
		
		UWBP_NaEventBanner_C_SetData_Params params {};
		params.BannerId = BannerId;
		params.UploadId = UploadId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventBanner.WBP_NaEventBanner_C.LoadBannerImage
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventBanner_C::LoadBannerImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventBanner.WBP_NaEventBanner_C.LoadBannerImage");
		
		UWBP_NaEventBanner_C_LoadBannerImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventBanner.WBP_NaEventBanner_C.SetDataByEventId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EvemtId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventBanner_C::SetDataByEventId(int32_t EvemtId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventBanner.WBP_NaEventBanner_C.SetDataByEventId");
		
		UWBP_NaEventBanner_C_SetDataByEventId_Params params {};
		params.EvemtId = EvemtId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventBanner.WBP_NaEventBanner_C.ExecuteUbergraph_WBP_NaEventBanner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventBanner_C::ExecuteUbergraph_WBP_NaEventBanner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventBanner.WBP_NaEventBanner_C.ExecuteUbergraph_WBP_NaEventBanner");
		
		UWBP_NaEventBanner_C_ExecuteUbergraph_WBP_NaEventBanner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventBanner.WBP_NaEventBanner_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventBanner_C::OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventBanner.WBP_NaEventBanner_C.OnClicked__DelegateSignature");
		
		UWBP_NaEventBanner_C_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_NaEventBanner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_NaEventBanner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_NaEventBanner.WBP_NaEventBanner_C");
		return ptr;
	}

}


