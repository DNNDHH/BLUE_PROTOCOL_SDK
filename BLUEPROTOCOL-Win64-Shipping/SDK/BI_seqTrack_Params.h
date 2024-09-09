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
	 * Function BI_seqTrack.BI_seqTrack_C.ANon
	 */
	struct UBI_seqTrack_C_ANon_Params
	{
	public:
		int32_t                                                    Test;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_seqTrack.BI_seqTrack_C.GetText
	 */
	struct UBI_seqTrack_C_GetText_Params
	{
	public:
		int32_t                                                    NewParam;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UCG8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              NewParam1;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_seqTrack.BI_seqTrack_C.getSeqTrackInfoIndex
	 */
	struct UBI_seqTrack_C_getSeqTrackInfoIndex_Params
	{
	public:
		int32_t                                                    NewParam1;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_seqTrack.BI_seqTrack_C.setSeqTrackInfoString
	 */
	struct UBI_seqTrack_C_setSeqTrackInfoString_Params
	{
	public:
		class FString                                              NewParam;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    NewParam1;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_seqTrack.BI_seqTrack_C.NSonEnd
	 */
	struct UBI_seqTrack_C_NSonEnd_Params
	{	};

	/**
	 * Function BI_seqTrack.BI_seqTrack_C.NSonBegin
	 */
	struct UBI_seqTrack_C_NSonBegin_Params
	{	};

	/**
	 * Function BI_seqTrack.BI_seqTrack_C.NSonTick
	 */
	struct UBI_seqTrack_C_NSonTick_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
