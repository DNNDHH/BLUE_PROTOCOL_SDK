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
	 * 		Name   -> Function RelationshipIconSets.RelationshipIconSets_C.InitFriendState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFriend                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URelationshipIconSets_C::InitFriendState(bool bFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RelationshipIconSets.RelationshipIconSets_C.InitFriendState");
		
		URelationshipIconSets_C_InitFriendState_Params params {};
		params.bFriend = bFriend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RelationshipIconSets.RelationshipIconSets_C.InitFollowState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsFriend                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URelationshipIconSets_C::InitFollowState(bool InIsFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RelationshipIconSets.RelationshipIconSets_C.InitFollowState");
		
		URelationshipIconSets_C_InitFollowState_Params params {};
		params.InIsFriend = InIsFriend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RelationshipIconSets.RelationshipIconSets_C.InitPartyIcons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsMember                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isLeader                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URelationshipIconSets_C::InitPartyIcons(bool IsMember, bool isLeader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RelationshipIconSets.RelationshipIconSets_C.InitPartyIcons");
		
		URelationshipIconSets_C_InitPartyIcons_Params params {};
		params.IsMember = IsMember;
		params.isLeader = isLeader;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RelationshipIconSets.RelationshipIconSets_C.InitFromParty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPartyMemberState*                         InPartyMemberState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URelationshipIconSets_C::InitFromParty(class USBPartyMemberState* InPartyMemberState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RelationshipIconSets.RelationshipIconSets_C.InitFromParty");
		
		URelationshipIconSets_C_InitFromParty_Params params {};
		params.InPartyMemberState = InPartyMemberState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RelationshipIconSets.RelationshipIconSets_C.InitFromGuild
	 * 		Flags  -> ()
	 */
	void URelationshipIconSets_C::InitFromGuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RelationshipIconSets.RelationshipIconSets_C.InitFromGuild");
		
		URelationshipIconSets_C_InitFromGuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RelationshipIconSets.RelationshipIconSets_C.Construct
	 * 		Flags  -> ()
	 */
	void URelationshipIconSets_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RelationshipIconSets.RelationshipIconSets_C.Construct");
		
		URelationshipIconSets_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RelationshipIconSets.RelationshipIconSets_C.ExecuteUbergraph_RelationshipIconSets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URelationshipIconSets_C::ExecuteUbergraph_RelationshipIconSets(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RelationshipIconSets.RelationshipIconSets_C.ExecuteUbergraph_RelationshipIconSets");
		
		URelationshipIconSets_C_ExecuteUbergraph_RelationshipIconSets_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URelationshipIconSets_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URelationshipIconSets_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RelationshipIconSets.RelationshipIconSets_C");
		return ptr;
	}

}


