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
	 * 		Name   -> Function NpcGuildDetail.NpcGuildDetail_C.GetGiuldComp
	 * 		Flags  -> ()
	 */
	class USBPlayerGuildComponent* UNpcGuildDetail_C::GetGiuldComp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildDetail.NpcGuildDetail_C.GetGiuldComp");
		
		UNpcGuildDetail_C_GetGiuldComp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuildDetail.NpcGuildDetail_C.SetGuildData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuildData                                  GuildData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UNpcGuildDetail_C::SetGuildData(const struct FGuildData& GuildData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildDetail.NpcGuildDetail_C.SetGuildData");
		
		UNpcGuildDetail_C_SetGuildData_Params params {};
		params.GuildData = GuildData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuildDetail.NpcGuildDetail_C.Construct
	 * 		Flags  -> ()
	 */
	void UNpcGuildDetail_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildDetail.NpcGuildDetail_C.Construct");
		
		UNpcGuildDetail_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuildDetail.NpcGuildDetail_C.OnChanged
	 * 		Flags  -> ()
	 */
	void UNpcGuildDetail_C::OnChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildDetail.NpcGuildDetail_C.OnChanged");
		
		UNpcGuildDetail_C_OnChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuildDetail.NpcGuildDetail_C.OnRequestDissolution
	 * 		Flags  -> ()
	 */
	void UNpcGuildDetail_C::OnRequestDissolution()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildDetail.NpcGuildDetail_C.OnRequestDissolution");
		
		UNpcGuildDetail_C_OnRequestDissolution_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuildDetail.NpcGuildDetail_C.Destruct
	 * 		Flags  -> ()
	 */
	void UNpcGuildDetail_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildDetail.NpcGuildDetail_C.Destruct");
		
		UNpcGuildDetail_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuildDetail.NpcGuildDetail_C.OnChangeName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNpcGuildDetail_C::OnChangeName(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildDetail.NpcGuildDetail_C.OnChangeName");
		
		UNpcGuildDetail_C_OnChangeName_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuildDetail.NpcGuildDetail_C.BndEvt__Btn_TeamRename_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNpcGuildDetail_C::BndEvt__Btn_TeamRename_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildDetail.NpcGuildDetail_C.BndEvt__Btn_TeamRename_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");
		
		UNpcGuildDetail_C_BndEvt__Btn_TeamRename_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuildDetail.NpcGuildDetail_C.BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNpcGuildDetail_C::BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildDetail.NpcGuildDetail_C.BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");
		
		UNpcGuildDetail_C_BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcGuildDetail.NpcGuildDetail_C.ExecuteUbergraph_NpcGuildDetail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNpcGuildDetail_C::ExecuteUbergraph_NpcGuildDetail(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcGuildDetail.NpcGuildDetail_C.ExecuteUbergraph_NpcGuildDetail");
		
		UNpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNpcGuildDetail_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNpcGuildDetail_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NpcGuildDetail.NpcGuildDetail_C");
		return ptr;
	}

}


