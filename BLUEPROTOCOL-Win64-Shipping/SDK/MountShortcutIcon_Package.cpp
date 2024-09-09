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
	 * 		Name   -> Function MountShortcutIcon.MountShortcutIcon_C.CheckSwitchIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMountShortcutIcon_C::CheckSwitchIndex(int32_t Index, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountShortcutIcon.MountShortcutIcon_C.CheckSwitchIndex");
		
		UMountShortcutIcon_C_CheckSwitchIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountShortcutIcon.MountShortcutIcon_C.SetSwitch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMountShortcutIcon_C::SetSwitch(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountShortcutIcon.MountShortcutIcon_C.SetSwitch");
		
		UMountShortcutIcon_C_SetSwitch_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountShortcutIcon.MountShortcutIcon_C.PlayAnimInOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bin                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMountShortcutIcon_C::PlayAnimInOut(bool bin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountShortcutIcon.MountShortcutIcon_C.PlayAnimInOut");
		
		UMountShortcutIcon_C_PlayAnimInOut_Params params {};
		params.bin = bin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountShortcutIcon.MountShortcutIcon_C.UpdateIconTexture
	 * 		Flags  -> ()
	 */
	void UMountShortcutIcon_C::UpdateIconTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountShortcutIcon.MountShortcutIcon_C.UpdateIconTexture");
		
		UMountShortcutIcon_C_UpdateIconTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountShortcutIcon.MountShortcutIcon_C.PlayAnimChargeEnd
	 * 		Flags  -> ()
	 */
	void UMountShortcutIcon_C::PlayAnimChargeEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountShortcutIcon.MountShortcutIcon_C.PlayAnimChargeEnd");
		
		UMountShortcutIcon_C_PlayAnimChargeEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountShortcutIcon.MountShortcutIcon_C.UpdateKeyText
	 * 		Flags  -> ()
	 */
	void UMountShortcutIcon_C::UpdateKeyText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountShortcutIcon.MountShortcutIcon_C.UpdateKeyText");
		
		UMountShortcutIcon_C_UpdateKeyText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountShortcutIcon.MountShortcutIcon_C.UpdateInterval
	 * 		Flags  -> ()
	 */
	void UMountShortcutIcon_C::UpdateInterval()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountShortcutIcon.MountShortcutIcon_C.UpdateInterval");
		
		UMountShortcutIcon_C_UpdateInterval_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountShortcutIcon.MountShortcutIcon_C.BndEvt__MountShortcutIcon_txtKey_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMountShortcutIcon_C::BndEvt__MountShortcutIcon_txtKey_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountShortcutIcon.MountShortcutIcon_C.BndEvt__MountShortcutIcon_txtKey_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature");
		
		UMountShortcutIcon_C_BndEvt__MountShortcutIcon_txtKey_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountShortcutIcon.MountShortcutIcon_C.BndEvt__MountShortcutIcon_txtKey_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMountShortcutIcon_C::BndEvt__MountShortcutIcon_txtKey_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountShortcutIcon.MountShortcutIcon_C.BndEvt__MountShortcutIcon_txtKey_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature");
		
		UMountShortcutIcon_C_BndEvt__MountShortcutIcon_txtKey_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountShortcutIcon.MountShortcutIcon_C.BndEvt__MountShortcutIcon_txtKey_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMountShortcutIcon_C::BndEvt__MountShortcutIcon_txtKey_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountShortcutIcon.MountShortcutIcon_C.BndEvt__MountShortcutIcon_txtKey_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature");
		
		UMountShortcutIcon_C_BndEvt__MountShortcutIcon_txtKey_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountShortcutIcon.MountShortcutIcon_C.Construct
	 * 		Flags  -> ()
	 */
	void UMountShortcutIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountShortcutIcon.MountShortcutIcon_C.Construct");
		
		UMountShortcutIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountShortcutIcon.MountShortcutIcon_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMountShortcutIcon_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountShortcutIcon.MountShortcutIcon_C.Tick");
		
		UMountShortcutIcon_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountShortcutIcon.MountShortcutIcon_C.Destruct
	 * 		Flags  -> ()
	 */
	void UMountShortcutIcon_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountShortcutIcon.MountShortcutIcon_C.Destruct");
		
		UMountShortcutIcon_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountShortcutIcon.MountShortcutIcon_C.ExecuteUbergraph_MountShortcutIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMountShortcutIcon_C::ExecuteUbergraph_MountShortcutIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountShortcutIcon.MountShortcutIcon_C.ExecuteUbergraph_MountShortcutIcon");
		
		UMountShortcutIcon_C_ExecuteUbergraph_MountShortcutIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMountShortcutIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMountShortcutIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MountShortcutIcon.MountShortcutIcon_C");
		return ptr;
	}

}


