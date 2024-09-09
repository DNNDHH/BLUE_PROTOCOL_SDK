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
	 * Function NpcGuildDetail.NpcGuildDetail_C.GetGiuldComp
	 */
	struct UNpcGuildDetail_C_GetGiuldComp_Params
	{
	public:
		class USBPlayerGuildComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NpcGuildDetail.NpcGuildDetail_C.SetGuildData
	 */
	struct UNpcGuildDetail_C_SetGuildData_Params
	{
	public:
		struct FGuildData                                          GuildData;                                               // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function NpcGuildDetail.NpcGuildDetail_C.Construct
	 */
	struct UNpcGuildDetail_C_Construct_Params
	{	};

	/**
	 * Function NpcGuildDetail.NpcGuildDetail_C.OnChanged
	 */
	struct UNpcGuildDetail_C_OnChanged_Params
	{	};

	/**
	 * Function NpcGuildDetail.NpcGuildDetail_C.OnRequestDissolution
	 */
	struct UNpcGuildDetail_C_OnRequestDissolution_Params
	{	};

	/**
	 * Function NpcGuildDetail.NpcGuildDetail_C.Destruct
	 */
	struct UNpcGuildDetail_C_Destruct_Params
	{	};

	/**
	 * Function NpcGuildDetail.NpcGuildDetail_C.OnChangeName
	 */
	struct UNpcGuildDetail_C_OnChangeName_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NpcGuildDetail.NpcGuildDetail_C.BndEvt__Btn_TeamRename_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 */
	struct UNpcGuildDetail_C_BndEvt__Btn_TeamRename_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function NpcGuildDetail.NpcGuildDetail_C.BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
	 */
	struct UNpcGuildDetail_C_BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function NpcGuildDetail.NpcGuildDetail_C.ExecuteUbergraph_NpcGuildDetail
	 */
	struct UNpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
