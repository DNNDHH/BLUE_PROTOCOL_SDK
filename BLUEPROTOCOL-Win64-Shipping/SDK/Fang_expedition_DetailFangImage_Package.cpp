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
	 * 		Name   -> Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.ResetAnimState
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailFangImage_C::ResetAnimState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.ResetAnimState");
		
		UFang_expedition_DetailFangImage_C_ResetAnimState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.SetTextureRef
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailFangImage_C::SetTextureRef()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.SetTextureRef");
		
		UFang_expedition_DetailFangImage_C_SetTextureRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.SetTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailFangImage_C::SetTexture(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.SetTexture");
		
		UFang_expedition_DetailFangImage_C_SetTexture_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.OnLoaded_B65A1B5649E5906D193D59B0005B2979
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailFangImage_C::OnLoaded_B65A1B5649E5906D193D59B0005B2979(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.OnLoaded_B65A1B5649E5906D193D59B0005B2979");
		
		UFang_expedition_DetailFangImage_C_OnLoaded_B65A1B5649E5906D193D59B0005B2979_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.LoadImage
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailFangImage_C::LoadImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.LoadImage");
		
		UFang_expedition_DetailFangImage_C_LoadImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.PlayMoveAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailFangImage_C::PlayMoveAnim(int32_t Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.PlayMoveAnim");
		
		UFang_expedition_DetailFangImage_C_PlayMoveAnim_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailFangImage_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.OnAnimationFinished");
		
		UFang_expedition_DetailFangImage_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.FoceRemoveAnim
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailFangImage_C::FoceRemoveAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.FoceRemoveAnim");
		
		UFang_expedition_DetailFangImage_C_FoceRemoveAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.ExecuteUbergraph_Fang_expedition_DetailFangImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailFangImage_C::ExecuteUbergraph_Fang_expedition_DetailFangImage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.ExecuteUbergraph_Fang_expedition_DetailFangImage");
		
		UFang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.OnFinishAnimation__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailFangImage_C::OnFinishAnimation__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.OnFinishAnimation__DelegateSignature");
		
		UFang_expedition_DetailFangImage_C_OnFinishAnimation__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expedition_DetailFangImage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_DetailFangImage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C");
		return ptr;
	}

}


