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
	 * Function ChatLogOtherMessageTempList.ChatLogOtherMessageTempList_C.ZeroPadding
	 */
	struct UChatLogOtherMessageTempList_C_ZeroPadding_Params
	{
	public:
		int32_t                                                    InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RHPA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                RetValue;                                                // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function ChatLogOtherMessageTempList.ChatLogOtherMessageTempList_C.Init
	 */
	struct UChatLogOtherMessageTempList_C_Init_Params
	{
	public:
		struct FSBChatUIMessage                                    InMessLog;                                               // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
