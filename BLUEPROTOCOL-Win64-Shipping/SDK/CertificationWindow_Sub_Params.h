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
	 * Function CertificationWindow_Sub.CertificationWindow_Sub_C.GetTextId_Monthly
	 */
	struct UCertificationWindow_Sub_C_GetTextId_Monthly_Params
	{
	public:
		int32_t                                                    Upper;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SB5M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Text;                                                    // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function CertificationWindow_Sub.CertificationWindow_Sub_C.GetTextId_ValueLimit
	 */
	struct UCertificationWindow_Sub_C_GetTextId_ValueLimit_Params
	{
	public:
		int32_t                                                    Upper;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function CertificationWindow_Sub.CertificationWindow_Sub_C.GetTextId_AgeLimit
	 */
	struct UCertificationWindow_Sub_C_GetTextId_AgeLimit_Params
	{
	public:
		int32_t                                                    Lower;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Upper;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function CertificationWindow_Sub.CertificationWindow_Sub_C.SetText_MasterData
	 */
	struct UCertificationWindow_Sub_C_SetText_MasterData_Params
	{
	public:
		struct FSBPaymentLimitMasterData                           Data;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function CertificationWindow_Sub.CertificationWindow_Sub_C.ExecuteUbergraph_CertificationWindow_Sub
	 */
	struct UCertificationWindow_Sub_C_ExecuteUbergraph_CertificationWindow_Sub_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CertificationWindow_Sub.CertificationWindow_Sub_C.OnRequest__DelegateSignature
	 */
	struct UCertificationWindow_Sub_C_OnRequest__DelegateSignature_Params
	{
	public:
		int32_t                                                    Year;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Month;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CertificationWindow_Sub.CertificationWindow_Sub_C.OnClose__DelegateSignature
	 */
	struct UCertificationWindow_Sub_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
