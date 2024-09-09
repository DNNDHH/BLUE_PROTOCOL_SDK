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
	 * 		Name   -> Function MiniMapIconPartyMember.MiniMapIconPartyMember_C.Construct
	 * 		Flags  -> ()
	 */
	void UMiniMapIconPartyMember_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIconPartyMember.MiniMapIconPartyMember_C.Construct");
		
		UMiniMapIconPartyMember_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIconPartyMember.MiniMapIconPartyMember_C.Destruct
	 * 		Flags  -> ()
	 */
	void UMiniMapIconPartyMember_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIconPartyMember.MiniMapIconPartyMember_C.Destruct");
		
		UMiniMapIconPartyMember_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIconPartyMember.MiniMapIconPartyMember_C.CustomEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBMapPartyMemberIcon*                       InPartyMemberIcon                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsDead                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMiniMapIconPartyMember_C::CustomEvent_2(class USBMapPartyMemberIcon* InPartyMemberIcon, bool IsDead)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIconPartyMember.MiniMapIconPartyMember_C.CustomEvent_2");
		
		UMiniMapIconPartyMember_C_CustomEvent_2_Params params {};
		params.InPartyMemberIcon = InPartyMemberIcon;
		params.IsDead = IsDead;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIconPartyMember.MiniMapIconPartyMember_C.ExecuteUbergraph_MiniMapIconPartyMember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIconPartyMember_C::ExecuteUbergraph_MiniMapIconPartyMember(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIconPartyMember.MiniMapIconPartyMember_C.ExecuteUbergraph_MiniMapIconPartyMember");
		
		UMiniMapIconPartyMember_C_ExecuteUbergraph_MiniMapIconPartyMember_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIconPartyMember.MiniMapIconPartyMember_C.OnDead__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMiniMapIconPartyMember_C*                   PartyMember                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsDead                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMiniMapIconPartyMember_C::OnDead__DelegateSignature(class UMiniMapIconPartyMember_C* PartyMember, bool IsDead)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIconPartyMember.MiniMapIconPartyMember_C.OnDead__DelegateSignature");
		
		UMiniMapIconPartyMember_C_OnDead__DelegateSignature_Params params {};
		params.PartyMember = PartyMember;
		params.IsDead = IsDead;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMiniMapIconPartyMember_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMiniMapIconPartyMember_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MiniMapIconPartyMember.MiniMapIconPartyMember_C");
		return ptr;
	}

}


