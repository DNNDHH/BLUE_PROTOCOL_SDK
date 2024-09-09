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
	 * 		Name   -> Function UMG_PhotoModeControll_UploadListSlot.UMG_PhotoModeControll_UploadListSlot_C.SetSlateBrush
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InBrushImage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControll_UploadListSlot_C::SetSlateBrush(class UObject* InBrushImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControll_UploadListSlot.UMG_PhotoModeControll_UploadListSlot_C.SetSlateBrush");
		
		UUMG_PhotoModeControll_UploadListSlot_C_SetSlateBrush_Params params {};
		params.InBrushImage = InBrushImage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControll_UploadListSlot.UMG_PhotoModeControll_UploadListSlot_C.SetTexture_Bp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           InTexture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControll_UploadListSlot_C::SetTexture_Bp(class UTexture2DDynamic* InTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControll_UploadListSlot.UMG_PhotoModeControll_UploadListSlot_C.SetTexture_Bp");
		
		UUMG_PhotoModeControll_UploadListSlot_C_SetTexture_Bp_Params params {};
		params.InTexture = InTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControll_UploadListSlot.UMG_PhotoModeControll_UploadListSlot_C.SetTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           InTexture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControll_UploadListSlot_C::SetTexture(class UTexture2DDynamic* InTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControll_UploadListSlot.UMG_PhotoModeControll_UploadListSlot_C.SetTexture");
		
		UUMG_PhotoModeControll_UploadListSlot_C_SetTexture_Params params {};
		params.InTexture = InTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControll_UploadListSlot.UMG_PhotoModeControll_UploadListSlot_C.ExecuteUbergraph_UMG_PhotoModeControll_UploadListSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControll_UploadListSlot_C::ExecuteUbergraph_UMG_PhotoModeControll_UploadListSlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControll_UploadListSlot.UMG_PhotoModeControll_UploadListSlot_C.ExecuteUbergraph_UMG_PhotoModeControll_UploadListSlot");
		
		UUMG_PhotoModeControll_UploadListSlot_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadListSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_PhotoModeControll_UploadListSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_PhotoModeControll_UploadListSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PhotoModeControll_UploadListSlot.UMG_PhotoModeControll_UploadListSlot_C");
		return ptr;
	}

}


