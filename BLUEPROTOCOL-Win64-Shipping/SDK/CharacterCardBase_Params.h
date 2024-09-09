#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function CharacterCardBase.CharacterCardBase_C.SetIsCardInfoHidden
	 */
	struct UCharacterCardBase_C_SetIsCardInfoHidden_Params
	{
	public:
		bool                                                       bInIsInfoHidden;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HWB3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CharacterCardBase.CharacterCardBase_C.SetIsBlankCard
	 */
	struct UCharacterCardBase_C_SetIsBlankCard_Params
	{
	public:
		bool                                                       bInIsBlank;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CharacterCardBase.CharacterCardBase_C.SetCharacterCardData
	 */
	struct UCharacterCardBase_C_SetCharacterCardData_Params
	{
	public:
		struct FSBPlayerCharacterCardData                          InCharacterCardData;                                     // 0x0000(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bInIsMe;                                                 // 0x00B0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LDHZ[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USBPartyMemberState*                                 InPartyMemberState;                                      // 0x00B8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterCardBase.CharacterCardBase_C.SetCharacterCardType
	 */
	struct UCharacterCardBase_C_SetCharacterCardType_Params
	{
	public:
		ECharacterCardType                                         InType;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInIsReceptingParticipants;                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CharacterCardBase.CharacterCardBase_C.PreConstruct
	 */
	struct UCharacterCardBase_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CharacterCardBase.CharacterCardBase_C.Construct
	 */
	struct UCharacterCardBase_C_Construct_Params
	{	};

	/**
	 * Function CharacterCardBase.CharacterCardBase_C.BndEvt__CharacterCardBase_LikeBtn_K2Node_ComponentBoundEvent_2_BtnEventComplete__DelegateSignature
	 */
	struct UCharacterCardBase_C_BndEvt__CharacterCardBase_LikeBtn_K2Node_ComponentBoundEvent_2_BtnEventComplete__DelegateSignature_Params
	{	};

	/**
	 * Function CharacterCardBase.CharacterCardBase_C.Destruct
	 */
	struct UCharacterCardBase_C_Destruct_Params
	{	};

	/**
	 * Function CharacterCardBase.CharacterCardBase_C.BndEvt__CharacterCardBase_FaceBgData_K2Node_ComponentBoundEvent_3_OnClickEvent__DelegateSignature
	 */
	struct UCharacterCardBase_C_BndEvt__CharacterCardBase_FaceBgData_K2Node_ComponentBoundEvent_3_OnClickEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CharacterCardBase.CharacterCardBase_C.BndEvt__CharacterCardBase_FaceBgData_K2Node_ComponentBoundEvent_0_OnHover__DelegateSignature
	 */
	struct UCharacterCardBase_C_BndEvt__CharacterCardBase_FaceBgData_K2Node_ComponentBoundEvent_0_OnHover__DelegateSignature_Params
	{	};

	/**
	 * Function CharacterCardBase.CharacterCardBase_C.BndEvt__CharacterCardBase_FaceBgData_K2Node_ComponentBoundEvent_1_OnUnhover__DelegateSignature
	 */
	struct UCharacterCardBase_C_BndEvt__CharacterCardBase_FaceBgData_K2Node_ComponentBoundEvent_1_OnUnhover__DelegateSignature_Params
	{	};

	/**
	 * Function CharacterCardBase.CharacterCardBase_C.StartNewPartyMemberInAnimation
	 */
	struct UCharacterCardBase_C_StartNewPartyMemberInAnimation_Params
	{	};

	/**
	 * Function CharacterCardBase.CharacterCardBase_C.ExecuteUbergraph_CharacterCardBase
	 */
	struct UCharacterCardBase_C_ExecuteUbergraph_CharacterCardBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VB9M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CharacterCardBase.CharacterCardBase_C.OnSendLike__DelegateSignature
	 */
	struct UCharacterCardBase_C_OnSendLike__DelegateSignature_Params
	{	};

	/**
	 * Function CharacterCardBase.CharacterCardBase_C.OnClicked__DelegateSignature
	 */
	struct UCharacterCardBase_C_OnClicked__DelegateSignature_Params
	{
	public:
		class FString                                              InCharacterId;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bInIsMe;                                                 // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
