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
	 * 		Name   -> Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.Set Delete Mode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDeleteMode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CharacterSelectListItem_C::SetDeleteMode(bool bDeleteMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.Set Delete Mode");
		
		UWBP_CharacterSelectListItem_C_SetDeleteMode_Params params {};
		params.bDeleteMode = bDeleteMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.ResetMaskCanvas
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterSelectListItem_C::ResetMaskCanvas()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.ResetMaskCanvas");
		
		UWBP_CharacterSelectListItem_C_ResetMaskCanvas_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.PlayDelAnim
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterSelectListItem_C::PlayDelAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.PlayDelAnim");
		
		UWBP_CharacterSelectListItem_C_PlayDelAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.Reset Move
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterSelectListItem_C::ResetMove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.Reset Move");
		
		UWBP_CharacterSelectListItem_C_ResetMove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.Set Chara Image
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           InTex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CharacterSelectListItem_C::SetCharaImage(class UTexture2DDynamic* InTex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.Set Chara Image");
		
		UWBP_CharacterSelectListItem_C_SetCharaImage_Params params {};
		params.InTex = InTex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.Download Chara Image
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CharaIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CharacterSelectListItem_C::DownloadCharaImage(int32_t CharaIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.Download Chara Image");
		
		UWBP_CharacterSelectListItem_C_DownloadCharaImage_Params params {};
		params.CharaIndex = CharaIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.Move
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterSelectListItem_C::Move()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.Move");
		
		UWBP_CharacterSelectListItem_C_Move_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.SetMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InDir                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CharacterSelectListItem_C::SetMove(int32_t InDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.SetMove");
		
		UWBP_CharacterSelectListItem_C_SetMove_Params params {};
		params.InDir = InDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.DownLoadCharacterImage_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CharaIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CharacterSelectListItem_C::DownLoadCharacterImage_Event(int32_t CharaIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.DownLoadCharacterImage_Event");
		
		UWBP_CharacterSelectListItem_C_DownLoadCharacterImage_Event_Params params {};
		params.CharaIndex = CharaIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CharacterSelectListItem_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.OnAnimationFinished");
		
		UWBP_CharacterSelectListItem_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.DebugUpdeta
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterSelectListItem_C::DebugUpdeta()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.DebugUpdeta");
		
		UWBP_CharacterSelectListItem_C_DebugUpdeta_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterSelectListItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.Construct");
		
		UWBP_CharacterSelectListItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.SetCharacterImageData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_CharacterSelectCaptureOne_C*             CharacterSelectCaptureOne                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CharacterSelectListItem_C::SetCharacterImageData(class ABP_CharacterSelectCaptureOne_C* CharacterSelectCaptureOne)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.SetCharacterImageData");
		
		UWBP_CharacterSelectListItem_C_SetCharacterImageData_Params params {};
		params.CharacterSelectCaptureOne = CharacterSelectCaptureOne;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CharacterSelectListItem_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.Tick");
		
		UWBP_CharacterSelectListItem_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.ExecuteUbergraph_WBP_CharacterSelectListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CharacterSelectListItem_C::ExecuteUbergraph_WBP_CharacterSelectListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.ExecuteUbergraph_WBP_CharacterSelectListItem");
		
		UWBP_CharacterSelectListItem_C_ExecuteUbergraph_WBP_CharacterSelectListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.EndDelAnim__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterSelectListItem_C::EndDelAnim__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.EndDelAnim__DelegateSignature");
		
		UWBP_CharacterSelectListItem_C_EndDelAnim__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.EndAnim__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_CharacterSelectListItem_C::EndAnim__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.EndAnim__DelegateSignature");
		
		UWBP_CharacterSelectListItem_C_EndAnim__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CharacterSelectListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CharacterSelectListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C");
		return ptr;
	}

}


